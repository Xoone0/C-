//明解C语言
//练习6-1
//编写一段程序,通过调用函数的方式来对比输入两个值的大小
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int min2(int a, int b)
{
	if (a<b)
		return a;
	else
		return b;
}

int main()
{
	int a, b;
	printf("请输入a整数:");
	scanf("%d", &a);
	printf("请输入b整数:");
	scanf("%d", &b);
	printf("较小的值为%d", min2(a, b));
}