#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void Disboard(char arr[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void Dizboard(char arr[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",arr[i][j]);
			if (j < col - 1)
			{	
				printf("|");
			}
		}printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}printf("\n");
		}
	}
}
void PlayerMove(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家移动:>\n");
		scanf("%d %d", &x,&y);
		//if (arr[x][y] >= 1 && arr[x][y] == ' ')判断有误
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}

			else if (arr[x - 1][y - 1] = '#')
			{
				printf("坐标已被占用,请重新输入\n");
			}
		}
			else
			{
				printf("坐标非法,请重新输入\n");
			}

	}
	
}


void ComerMove(char arr[ROW][COL], int row, int col)
{
	printf("电脑移动:>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (arr[x][y] >= 0 && arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
}

char IsWin(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
		{
			return arr[i][1];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
		{
			return arr[1][i];
		}
	}
		if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
		{
			return arr[1][1];
		}
		if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] != ' ')
		{
			return arr[2][0];
		}
		
	char ret = IsFull(arr, row, col);
		if (ret == 0)
		{
			return 'C';
		}
		return 'Q';
}

int IsFull(char arr[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return '1';

}
