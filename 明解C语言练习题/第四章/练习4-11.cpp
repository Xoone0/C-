//明解C语言练习4-11
//对下列代码进行改变,达到效果为输入1936,输出"1936的逆向显示为6391"
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

	/* no比0大时 */
	printf("该整数逆向显示的结果是");
	while (no > 0) {
		printf("%d", no % 10);		/* 显示最后一位数 */ 
		no /= 10;					/* 右移一位 */
	}
	puts("。");

	return 0;
}
//更改后
int main()
{
	int no;

	do {
		printf("请输入一个正整数：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a请不要输入非正整数。");
	} while (no <= 0);
	printf("%d逆向显示的结果是",no);
	do
	{
		printf("%d", no % 10);	//显示最后一位数
		no /= 10;//将no%10的结果去掉小数再次循环
	} while (no > 0);
	

	return 0;
}
