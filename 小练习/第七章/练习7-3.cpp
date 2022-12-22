//明解C语言第七章7-3
/*编写一个函数rrotate,计算并返回无符号整形x右移n位后的值*/
/*编写一个函数irotate,计算并返回无符号整形x左移n位后的值*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>
size_t rrotate(size_t x, int n)
{
	if (0 == x || 0 == n)
	{
		return x;
	}
	else
	{
		return x >> n;
	}
}
size_t irotate(size_t x, int n)
{
	if (0 == x || 0 == n)
	{
		return x;
	}
	else
	{
		return x << n;
	}
}
int main(void)
{
	size_t uns_int = 0;
	int x = 0;
	int i = 0;
	do
	{
		printf("请选择右移(1)/左移(2)/退出(0)\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			scanf("%u%d", &uns_int, &x);
			size_t sum = rrotate(uns_int, x);
			printf("%u右移%d位后的结果是%u\n", uns_int, x, sum);
			break;
		case 2:
			scanf("%u%d", &uns_int, &x);
			size_t num = irotate(uns_int, x);
			printf("%u右移%d位后的结果是%u\n", uns_int, x, num);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("请重新输入:>\n");
		}
	} while (i);

	return 0;
}