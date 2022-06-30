//明解C语言练习4-7
//编写一段程序,读取输入值并显示小于输入值所有整数的2乘方
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 2;
	while (i < no)
	{

		printf("%d ", i);
		i *= 2;	
		printf("\n");
		
	}
	return 0;
}

//在i初始化时必须将其设置为2，不然1会默认输出。并且i*=2位置不能更改在printf前方.不然是先运算后输出，输入19会输出32（超过了i<no的限制）
