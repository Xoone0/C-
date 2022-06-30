//明解C语言练习4-16
//编写一段程序,读取输入的值,并输出小于该整数的所有奇数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	printf("请输入一个整数:"); scanf("%d", &a);
	for (b = 1; b <= a; b += 2)
	{
		printf("%3d", b);

	}

	return 0;
}

//看懂了就没难度,多动脑筋