#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"
void menu()
{

	printf("******************************\n");
	printf("*****       1. PLAY     ******\n");
	printf("*****       0. EXIT     ******\n");
	printf("******************************\n");


}


void game()
{
	char show[ROWS][COLS];//打印排查雷信息数组
	char mine[ROWS][COLS];//布置雷数组
	//初始化棋盘
	Inboard(show, ROWS, COLS,'*');
	Inboard(mine, ROWS, COLS,'0');
	//打印棋盘
	print_board(show, ROW, COL);
	//布置雷
	Set(mine, ROW, COL);
	//排查雷
	Find_show(mine,show, ROW, COL);


	

}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf_s("%d", &input);
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
	} while (input);
	return 0;
}