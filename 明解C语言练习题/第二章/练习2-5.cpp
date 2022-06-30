//明解C语言练习2-4
//编写一段程序,读取两个数值，计算出前者占后者的百分比。并以浮点型输出小数点后6位
#define _CRT_SECURE_NO_WARNINGSw
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	printf("请输入一个整数:"); scanf("%d", &i);
	printf("请输入一个整数:"); scanf("%d", &j);
	int sum = 0;
	sum = i * 100;
	printf("%d占%d的%5.6f%%",i, j, (double)sum / j);

}
//第二种写法
int main()
{
	int i = 0;
	int j = 0;
	printf("请输入一个整数:"); scanf("%d", &i);
	printf("请输入一个整数:"); scanf("%d", &j);
	double sum = 0;//这里在编译时可以通过调试查看，内容为0.0000000000000
	sum = i * 100;//5400.0000000000000
	printf("%d占%d的%5.6f%%",i, j, sum / j);

}
/*不同于上种写法,在这段代码中将sum创建为double型变量。这样就无需在最后表达式进行强制类型转换。
C语言规定，在整型/浮点型时，自动将结果转换为大值,称之为隐式类型转换（这里的大是指存储的数据）例如同样存放一个数
值5整型变量输出后结果为5而double输出结果为5.0*/
//第三种写法
int main()
{
	double i = 0;
	double j = 0;
	printf("请输入一个整数:"); scanf("%lf", &i);
	printf("请输入一个整数:"); scanf("%lf", &j);
	printf("前者占后者的%5.6f%%",(i/j)*100);

}
//第四种写法
int main()
{
	double i = 0;
	double j = 0;
	printf("请输入一个整数:"); scanf("%lf", &i);
	printf("请输入一个整数:"); scanf("%lf", &j);
	double sum = 0;
	sum = i/j;
	printf("前者占后者的%5.6f%%",sum*100);

}
