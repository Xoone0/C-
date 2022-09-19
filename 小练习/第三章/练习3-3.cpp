//明解C语言练习3-3
//编写一段程序,读取输入的值,并输出他的绝对值
define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no < 0)
		printf("%d", -no);
	else if (no > 0)
		printf("%d", -no);
	return 0;
}

