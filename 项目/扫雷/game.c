#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

// 初始化数组为指定字符
void Inboard(char board[ROWS][COLS], int row, int col, char set)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}

// 打印当前棋盘（show 或 mine）
void print_board(char board[ROWS][COLS], int row, int col)
{
	printf("----------扫雷游戏----------\n");
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

// 随机放置地雷，地雷用字符 '1' 表示
void Set(char board[ROWS][COLS], int row, int col)
{
	int count = ZHA_DAN;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

// 清理输入缓冲区中当前行的残留字符，避免 scanf 读取失败时死循环
static void clear_input_buffer(void)
{
	int ch = 0;
	while ((ch = getchar()) != '\n' && ch != EOF)
	{
		// 丢弃当前行剩余输入
	}
}

// 从标准输入读取一个整数；返回 1 表示成功，0 表示失败
static int read_int(const char* prompt, int* out)
{
	printf("%s", prompt);
	if (scanf("%d", out) != 1)
	{
		clear_input_buffer();
		return 0;
	}
	return 1;
}

// 统计 (x, y) 周围 8 个位置的雷数
static int show_user(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y]
		+ mine[x - 1][y - 1]
		+ mine[x][y - 1]
		+ mine[x + 1][y - 1]
		+ mine[x + 1][y]
		+ mine[x + 1][y + 1]
		+ mine[x][y + 1]
		+ mine[x - 1][y + 1] - 8 * '0';
}

// 玩家输入坐标进行排雷，踩雷则失败，排完非雷位置则成功
void Find_show(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0; // 已翻开的安全格子数

	while (win < row * col - ZHA_DAN)
	{
		if (!read_int("请输入行坐标:>", &x) || !read_int("请输入纵坐标:>", &y))
		{
			printf("输入必须是整数，请重新输入。\n");
			continue;
		}

		if (!(x > 0 && x <= row && y > 0 && y <= col))
		{
			printf("坐标不合法! 请重新输入。\n");
			continue;
		}

		// 已经翻开的格子不重复计数
		if (show[x][y] != '*')
		{
			printf("该坐标已经排查过，请选择其他位置。\n");
			continue;
		}

		if (mine[x][y] == '1')
		{
			printf("很遗憾！你被炸死了\n");
			print_board(mine, row, col);
			return;
		}

		int count = show_user(mine, x, y);
		show[x][y] = (char)(count + '0');
		win++;
		print_board(show, row, col);
	}

	printf("恭喜你，排雷成功！\n");
}
