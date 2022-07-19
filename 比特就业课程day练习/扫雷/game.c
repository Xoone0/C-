#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//初始化数组
Inboard(char board[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}

print_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------扫雷游戏----------\n");
	//打印序列
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}printf("\n");
	//打印棋盘
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//竖列序列号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}printf("\n");
	}
}
Set(char board[ROWS][COLS], int row, int col)
{
	int count = zha_dan;
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
int static show_user(char mine[ROWS][COLS],int x, int y)
{
	return mine[x - 1][y] 
		  +mine[x - 1][y - 1]
		  +mine[x][y - 1]
		  +mine[x + 1][y - 1]
		  +mine[x + 1][y]
		  +mine[x + 1][y + 1]
		  +mine[x][y + 1]
		  +mine[x - 1][y + 1] - 8 * '0';
}
Find_show(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;//坐标
	int y = 0;//坐标
	int win = 0;//排查坐标是否排查完
	do
	{
	
		printf("请输入行坐标:>"); scanf("%d", &x);
		printf("请输入纵坐标:>"); scanf("%d", &y);
		if (x > 0 && x <= row && y <= col && y > 0)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾！你被炸死了\n");
				print_board(mine, row, col);
				break;
			}
			else
			{
				int eng = show_user(mine, x, y);
				show[x][y] = eng + '0';			
				print_board(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标不合法!请重新输入\n");
		}


	} while (win < row + col - zha_dan);
		if (win == row + col - zha_dan)
		{
			printf("恭喜你，排雷成功！\n");
		}
}	