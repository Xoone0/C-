#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"

// 清理输入缓冲区，处理非法输入
static void ClearInputBuffer(void)
{
	int ch = 0;
	while ((ch = getchar()) != '\n' && ch != EOF)
	{
		;
	}
}

void menu()
{

	printf("******************************\n");
	printf("*****       1. PLAY     ******\n");
	printf("*****       0. EXIT     ******\n");
	printf("******************************\n");


}


void game()
{
	char show[ROWS][COLS];//ӡŲϢ
	char mine[ROWS][COLS];//
	//ʼ
	Inboard(show, ROWS, COLS,'*');
	Inboard(mine, ROWS, COLS,'0');
	//ӡ
	print_board(show, ROW, COL);
	//
	Set(mine, ROW, COL);
	//Ų
	Find_show(mine,show, ROW, COL);


	

}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		if (scanf("%d", &input) != 1)
		{
			printf("输入无效，请输入 0 或 1。\n");
			ClearInputBuffer();
			input = -1;
			continue;
		}
		switch (input)
		{
		case 1: 
			game();
			break;
		case 0:
			printf("˳Ϸ!\n");
			break;
		default:
			printf("ѡѡ!\n");
			break;
		}
	} while (input);
	return 0;
}
