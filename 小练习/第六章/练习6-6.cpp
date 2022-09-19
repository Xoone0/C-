//明解C语言
//练习6-6
//编写一段程序,通过调用函数的方式来输出响铃,次数根据输入n值来定
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void alert(int n) {
	while (n-- > 0)

	{
		putchar('\a');

	}

}

int main()
{
	int x;

	printf("请输入要发出响铃的次数:");

	scanf("%d", &x);

	alert(x);

}
