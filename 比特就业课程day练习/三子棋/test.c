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
	printf("!!!������!!!\n");
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
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�������,����������!");
			break;
		}
	} while (input);
}