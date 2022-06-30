//明解C语言练习4-23
//做一个金字塔，提示:第n行显示(n-1)*2+1个
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, l;
	printf("来做一个金字塔吧!!.请输入行数:");
	scanf("%d", &i);
	for (j = 1; j <= i; j++)
	{
		for (l = 1; l <= i - j + 1; l++)
		{
			printf(" ");
		}
		for (l = 1; l <= (j - 1) * 2 + 1; l++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//鬼知道是怎么敲出来的,就随便输的