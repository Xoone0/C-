//明解C语言练习1-1
//创建一段程序，显示15-37的值。并以15-37=-22格式显示
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int vx, vy;
	printf("请输入一个整数:"); scanf("%d", &vx);
	printf("请再输入一个整数:"); scanf("%d", &vy);
	int vz = vx - vy;
	printf("%d-%d的值是%d", vx, vy, vz);

	return 0;
}