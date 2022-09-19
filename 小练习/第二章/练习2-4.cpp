//明解C语言练习2-4
//编写一段程序,对整型常量，浮点型常量。整型变量，浮点型变量进行运算。
#define _CRT_SECURE_NO_WARNINGSw
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int l = 0;
	double num =0;
	double zum =0;
	double sum =0;
	i = 5/2.0;
	j = 5/2;
	l = 5.0/2;
	num = 10.0/2.5;
	zum = 10.0/5;
	sum = 10/3.5;
	printf("%d",i);
	printf("%d",j);
	printf("%d",l);
	printf("%f",num);
	printf("%f",zum);
	printf("%f",sum);

}
//本题第13行代码i = 5/2.0;在C语言中，5/2=2.5但由于i为整型变量，故不输出小数点后数值。