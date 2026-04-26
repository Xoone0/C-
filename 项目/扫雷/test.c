#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

static void clear_input_buffer(void)
{
	int ch = 0;
	while ((ch = getchar()) != '\n' && ch != EOF)
	{
		// 丢弃无效输入
	}
}

void menu(void)
{
	printf("******************************\n");
	printf("*****       1. PLAY     ******\n");
	printf("*****       0. EXIT     ******\n");
	printf("******************************\n");
}

void game(void)
{
	char show[ROWS][COLS]; // 玩家视角棋盘
	char mine[ROWS][COLS]; // 雷区棋盘

	Inboard(show, ROWS, COLS, '*');
	Inboard(mine, ROWS, COLS, '0');

	print_board(show, ROW, COL);
	Set(mine, ROW, COL);
	Find_show(mine, show, ROW, COL);
}

int main(void)
{
	srand((unsigned int)time(NULL));
	int input = -1;

	do
	{
		menu();
		printf("请选择:>");
		if (scanf("%d", &input) != 1)
		{
			clear_input_buffer();
			printf("输入无效，请输入数字 0 或 1。\n");
			continue;
		}

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input != 0);

	return 0;
}
