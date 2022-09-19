//明解C语言练习4-17
//编写一段程序,读取输入的值,并输出小于该整数的所有整数的2次方
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	int i = 1;
	printf("请输入一个整数:"); scanf("%d", &a);
	for (b = 1; b <= a;)
	{
			
		printf("%d的2次方是%3d\n", b,b*b);
		b++;
	}

	return 0;
}