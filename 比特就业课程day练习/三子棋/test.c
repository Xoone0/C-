#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("**********************\n");
	printf("****** 1. paly  ******\n");
	printf("****** 0. exit  ******\n");
	printf("**********************\n");
	printf("**********************\n");

}
void game()
{
	printf("!!!三子棋!!!\n");
	char arr[ROW][COL] = { 0 };
	Board(arr,ROW, COL);
	Dis(arr, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误,请重新输入!");
			break;
		}
	} while (input);
}