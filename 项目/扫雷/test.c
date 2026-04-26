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
		scanf("%d", &input);
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