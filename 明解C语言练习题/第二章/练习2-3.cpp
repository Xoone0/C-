//明解C语言练习2-3
//编写一段程序,读取一个单精度数值,小数点显示后6位输出
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double vx;
	printf("请输入一个整数:"); scanf("%lf", &vx);
	printf("您输入的值为:%.6f", vx);

	return 0;

}