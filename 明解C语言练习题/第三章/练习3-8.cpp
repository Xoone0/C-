//明解C语言练习3-8
//使用if语句改写以下代码,达到同样效果
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1, n2;

	puts("请输入两个整数。");
	printf("整数1：");   scanf("%d", &n1);
	printf("整数2：");   scanf("%d", &n2);

	printf("它们的差是%d。\n", (n1 > n2) ? n1 - n2 : n2 - n1);

	return 0;
}

//第二种写法
int main(void)
{
	int n1, n2;

	printf("请输入两个整数:\n");
	printf("整数：");   scanf("%d", &n1);
	printf("整数：");   scanf("%d", &n2);

	if (n1 > n2)
	{
		printf("他们的差是%d", n1 - n2);
	}
	else if (n2 > n1)
	{
		printf("他们的差是%d", n2 - n1);
	}

	return 0;
}