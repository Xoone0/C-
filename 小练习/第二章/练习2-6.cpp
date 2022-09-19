//明解C语言练习2-6
//编写一段程序,读取输入的标准身高值，通过公式计算出标准体重，并以实数输出公式为:(身高-100)*0.9
#define _CRT_SECURE_NO_WARNINGSw
#include <stdio.h>
int main()
{
	int i = 0;
	printf("请输入您的身高:"); scanf("%d", &i);
	double sum = 0;
	sum = (i-100)*0.9;
	printf("您的体重是：%.1f公斤",sum);

}
//第二种写法
int main()
{
	int i = 0;
	printf("请输入您的身高:"); scanf("%d", &i);
	double sum = 0;
	sum = 0.9;
	printf("您的体重是：%.1f公斤",i * sum);

}

//第三种写法
int main()
{
	int i = 0;
	printf("请输入您的身高:"); scanf("%d", &i);
	printf("您的体重是：%.1f公斤",(double)(i - 100) * 0.9);

}
