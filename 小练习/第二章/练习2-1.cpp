//明解C语言练习2-1
//编写一段程序,读取两个数值，输出前者占后者的百分之多少
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int vx, vy;
	printf("请输入一个整数:"); scanf("%d", &vx);
	printf("请再输入一个整数:"); scanf("%d", &vy);
	//printf("-vx是vy%d%",(vx%vy)*10 );,自己写的，结果总是等于54使用/=0
	printf("%d占%d的%d%%"，vx,vy,(vx*100)/vy);//从网上找的答案

	return 0;
}
//由上述代码得到的启发
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int vx, vy;
	printf("请输入一个整数:"); scanf("%d",&vx);
	printf("请再输入一个整数:"); scanf("%d",&vy);
	int no = 0;
	no = (vx*100)/vy;
	//printf("-vx是vy%d%",(vx%vy)*10 );,自己写的，结果总是等于54使用/=0
	printf("%d占%d的%d%%"，vx,vy,no);//从网上找的答案

	return 0;
}
/*问题：
在输出占比时格式化字符串%d后的百分号必须跟两个，若只跟一个百分号则输出不会显示*%而只会显示一个十进制数值*。且会报错printf格式化字符串%未终止