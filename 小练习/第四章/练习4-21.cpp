//明解C语言练习4-21
//编写一段程序,读取输入数值,例如输入数值为3.则输出3行每行3个*符号
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, l;
	printf("请输入一个整数:");
	scanf("%d", &i);
	for (j = 1; j <= i; j++)
	{
		for (l = 1; l <= i; l++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
