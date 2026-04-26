#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 打印主菜单
void menu()
{
	printf("***********************\n");
	printf("***********************\n");
	printf("******  1.play   ******\n");
	printf("******  0.exit   ******\n");
	printf("***********************\n");
	printf("***********************\n");


}

// 一局猜数字游戏逻辑
void game()
{
	int input = 1;
	// 生成 [1, 100] 之间的随机数
	int number = rand() % 100 + 1;
	printf("猜数字\n");
	while (1)
	{
		printf("请猜数字>");
		// 做基本输入校验，避免非法输入造成死循环
		if (scanf("%d", &input) != 1)
		{
			int ch = 0;
			while ((ch = getchar()) != '\n' && ch != EOF)
			{
				;
			}
			printf("输入无效，请输入数字。\n");
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

int main()
{
	int n;
	// 使用当前时间作为随机种子，避免每次运行生成相同随机数
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择");
		if (scanf("%d", &n) != 1)
		{
			int ch = 0;
			while ((ch = getchar()) != '\n' && ch != EOF)
			{
				;
			}
			printf("输入无效，请输入 0 或 1。\n");
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
			printf("选择错误！请重新选择\n");
			break;
		}
	} while (n);
	return 0;
}
