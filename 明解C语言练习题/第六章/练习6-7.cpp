//明解C语言
//练习6-7
//编写一段程序,通过调用函数的方式来输HELLO。并换行,函数创建规则void HELLO(void)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void HELLO(void)
{
	printf("HELLO。\n");
}
int main()
{
	HELLO();
}
/*近两章练习都是在网上搜索到的答案,没有头绪*/