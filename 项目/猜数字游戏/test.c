#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static void clear_input_buffer(void)
{
	int ch = 0;
	while ((ch = getchar()) != '\n' && ch != EOF)
	{
		// 清理非法输入
	}
}

void menu(void)
{
	printf("***********************\n");
	printf("***********************\n");
	printf("******  1.play   ******\n");
	printf("******  0.exit   ******\n");
	printf("***********************\n");
	printf("***********************\n");
}

void game(void)
{
	int input = 0;
	int number = rand() % 100 + 1;
	printf("猜数字\n");
	while (1)
	{
		printf("请猜数字(1-100):>");
		if (scanf("%d", &input) != 1)
		{
			clear_input_buffer();
			printf("输入无效，请输入整数。\n");
			continue;
		}

		if (input > number)
		{
			printf("猜大了\n");
		}
		else if (input < number)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你！猜中了数字为%d\n", number);
			break;
		}
	}
}

int main(void)
{
	int n = -1;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		if (scanf("%d", &n) != 1)
		{
			clear_input_buffer();
			printf("输入无效，请输入 0 或 1。\n");
			continue;
		}
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误！请重新选择\n");
			break;
		}
	} while (n != 0);
	return 0;
}
