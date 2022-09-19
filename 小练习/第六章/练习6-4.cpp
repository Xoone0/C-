//明解C语言
//练习6-4
//更改以下代码,再创建一个函数再sqr里调用其他函数来返回输入整数的四次方
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	计算两个整数的平方差
*/

#include <stdio.h>

/*--- 返回x的平方 ---*/
int sqr(int x)
{
	return x * x;
}

/*--- 返回x和y的差值 ---*/
int diff(int a, int b)
{
	return (a > b) ? a - b : b - a;		/* 大值减小值 */
}

int main(void)
{
	int x, y;

	puts("请输入两个整数。");
	printf("整数x：");   scanf("%d", &x);
	printf("整数y：");   scanf("%d", &y);

	printf("x和y的平方差是%d。\n", diff(sqr(x), sqr(y)));

	return 0;
}


//更改后
int sqr(int t)
{
	return t * t;
}
int pow4(int x)
{
	return sqr(x * x);
}

/*--- 返回x和y的差值 ---*/
int diff(int a, int b)
{
	return (a > b) ? a - b : b - a;		/* 大值减小值 */
}

int main(void)
{
	int x, y;

	puts("请输入两个整数。");
	printf("整数x：");   scanf("%d", &x);
	printf("整数y：");   scanf("%d", &y);

	printf("x和y的平方差是%d。\n", diff(pow4(x), pow4(y)));

	return 0;
}
