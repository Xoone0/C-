//明解C语言练习3-4
//编写一段程序,读取输入的值,并判断A=B;A>B;A<B;判断结束输出判断结果
define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A;
	int B;
	printf("请输入一个整数："); scanf("%d", &A);
	printf("请输入一个整数："); scanf("%d", &B);
	if (A < B)
		printf("A小于B");
	else if (A == B)
		printf("A与B相等");
	else
		printf("A大于B");
	return 0;
}


//优化

define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;
	int on;
	printf("请输入一个整数："); scanf("%d", &no);
	printf("请输入一个整数："); scanf("%d", &on);
	if (no < on)
		printf("%d小于%d",no,on);
	else if (no == on)
		printf("%d等于%d", no,on);
	else
		printf("%d大于%d",no,on);
	return 0;
}

