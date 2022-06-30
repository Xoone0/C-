//明解C语言练习1-5
//使用scanf读取输入的数值，并输出该整数加上12的结果
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int num = 12;
	int a = 0;
	printf("请输入一个整数:");
	scanf("%d",&a);
	printf("该整数加上12的结果是%d",a+num);
	return 0;
}

//另一种写法为
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int num = 12;
	int a = 0;
	printf("请输入一个整数:");//在屏幕输出这段话，用于提示，不写也可以
	scanf("%d",&a);//a值跟随输入值不同变化
	int rum = 0;//此处的rum来存储变量a加上12的数值
	rum = a + num;
	printf("该整数加上12的结果是%d",rum);
	return 0;
}
//上述两段代码用到的新函数为
/*1.scanf可以从键盘读取输入信息
2.&是将scanf读取到的值存放到变量a内*/