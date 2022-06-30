//明解C语言
//练习6-2
//编写一段程序,通过调用函数的方式来对比输入三个值的大小
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int min3(int a, int b,int c)
{
	if (a < b)
		return a;
	else if (b < c)
		return b;
	else
		return c;
}

int main()
{
	int a, b, c;
	printf("请输入a整数:");
	scanf("%d", &a);
	printf("请输入b整数:");
	scanf("%d", &b);
	printf("请输入c整数:");
	scanf("%d", &c);
	printf("较小的值为%d", min3(a, b, c));
}
//输出代码多余,可去除,但是有提示会舒服一点