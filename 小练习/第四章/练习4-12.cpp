//明解C语言练习4-12
//编写一段程序,达到效果为输入1936,输出"1936的位数是4"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;

	do {
		printf("请输入一个正整数：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a请不要输入非正整数。");
	} while (no <= 0);
	printf("%d的位数是", no);
	int i = 0;
	do
	{
		no /= 10;//将读取到的值循环%10
		i++;//每循环一次,就记录一次
	} while (no > 0);
	printf("%d", i);


		return 0;
}
