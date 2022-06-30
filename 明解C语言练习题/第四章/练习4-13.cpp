//明解C语言练习4-12
//使用for语句编写一段程序,计算1到n的和.n为输入的值
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, l;
	printf("请输入一个整数");
	scanf("%d", &i);
	l = 0;
	for (j = 0; j <= i; j++)
	{
		l += j;
	}
	printf("0到%d的和是%d", i,l);
	return 0;
}