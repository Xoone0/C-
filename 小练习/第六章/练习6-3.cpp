//明解C语言
//练习6-3
//编写一段程序,通过调用函数的方式来输出输入整数的平方根
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int cube(int x)
{
	return x * x * x;
}

int main()
{
	int a;
	printf("请输入a整数:");
	scanf("%d", &a);
	printf("整数%d的立方为%d",a, cube(a));
}