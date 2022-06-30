//明解C语言练习4-8
//修改下列代码.输入值小于1时不输出换行符
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int no;

	printf("正整数");
	scanf("%d", &no);

	while (no-- > 0)
		putchar('*');
	putchar('\n');

	return 0;
}

//更改后
int main(void)
{
	int no;

	printf("正整数");
	scanf("%d", &no);

	while (no-- > 0)
		putchar('*');
	if (no>=1)
	{
		putchar('\n');
	}

	return 0;
}

