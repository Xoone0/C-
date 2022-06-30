//明解C语言练习4-18
//编写一段程序,读取输入的值,并输出等于输入数值的*,每输出5个便换行
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, i, sum;
	sum = 0;
	printf("请输入一个整数:");
	scanf("%d", &a);
	for (i = 0; i < a; i++)
	{
		sum++;
		putchar('*');
		if (sum%5==0)
		{
			printf("\n");
		}
	}
	

	return 0;
}
//更好的方法
int main()
{
	int a, i, sum;
	sum = 0;
	printf("请输入一个整数:");
	scanf("%d", &a);
	for (i = 0; i < a;)
	{
		i++;
		putchar('*');
		if (i%5==0)
		{
			printf("\n");
		}
	}
	

	return 0;
}