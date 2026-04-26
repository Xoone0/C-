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

// 清理输入缓冲区，避免非法输入导致循环异常
static void ClearInputBuffer(void)
{
	int ch = 0;
	while ((ch = getchar()) != '\n' && ch != EOF)
	{
		;
	}
}

void game()
{
	char arr[ROW][COL];
	// 先初始化棋盘，再打印初始状态
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
	// 使用时间作为随机种子，保证电脑落子随机性
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择");
		if (scanf("%d", &n) != 1)
		{
			printf("输入无效，请输入 0 或 1。\n");
			ClearInputBuffer();
			n = -1;
			continue;
		}
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
