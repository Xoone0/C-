#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("***********************\n");
	printf("***********************\n");
	printf("******  1.play   ******\n");
	printf("******  0.exit   ******\n");
	printf("***********************\n");
	printf("***********************\n");
}

void game()
{
	char arr[ROW][COL];
	Disboard(arr, ROW, COL);
	Dizboard(arr, ROW, COL);
	char ret = 0;

	while (1)
	{
		PlayerMove(arr, ROW, COL);
		Dizboard(arr, ROW, COL);
		ret = IsWin(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComerMove(arr, ROW, COL);
		Dizboard(arr, ROW, COL);
		ret = IsWin(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了！\n");
		Dizboard(arr, ROW, COL);

	}
	else if (ret == '#')
	{
		printf("电脑赢了!\n");
		Dizboard(arr, ROW, COL);

	}
	else
	{
		printf("平局！(获得“八府巡抚”荣耀称号)\n");
		printf("现充值18888元即可免费获得全新笔记本！)\n");
		Dizboard(arr, ROW, COL);
	}
	}




int main()
{
	int n = 0;
	do
	{
		int un = ((unsigned)time(NULL));
		menu();
		printf("请选择");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！");
			break;
		default:
			printf("选择错误！请重新选择");
			break;
		}
	} while (n);

	return 0;
}
