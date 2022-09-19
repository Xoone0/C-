//明解C语言
//练习6-5
//编写一段程序,通过调用函数的方式来输出1-n所有整数的和
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sump(int x)
{
	int n = 1;
	int sum = 0;
	for (n=1;n<=x;n++)
	{
		sum += n;
	}
	return sum;
}

int main()
{
	int a;
	printf("请输入一个整数:");
	scanf("%d", &a);
	printf("从1到整数%d所有的和为%d",a,sump(a));
}
//函数中的for循环也可以换成while循环,看个人习惯