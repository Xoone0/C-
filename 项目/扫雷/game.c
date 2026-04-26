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
	// 打印列序号
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	// 打印行序号与棋盘内容
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

	do
	{
		printf("请输入行坐标:>");
		scanf("%d", &x);
		printf("请输入纵坐标:>");
		scanf("%d", &y);

		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾！你被炸死了\n");
				print_board(mine, row, col);
				break;
			}
			else
			{
				int count = show_user(mine, x, y);
				show[x][y] = (char)(count + '0');
				print_board(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标不合法!请重新输入\n");
		}

	} while (win < row * col - ZHA_DAN);

	if (win == row * col - ZHA_DAN)
	{
		printf("恭喜你，排雷成功！\n");
	}
}
