//明解C语言练习4-19
//编写一段程序,读取输入的值,并输出该整数的所有约数,在最后再输出约数个数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, i, sum;
	sum = 0;
	printf("请输入一个整数:");
	scanf("%d", &a);
	for (i = 0; i < a;)
	{
		i++;
		if (a % i == 0)
		{
			printf("%d\n",i);
			sum++;
		}
	}
	printf("共有%d个约数", sum);


	return 0;
}