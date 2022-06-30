//明解C语言练习4-9
//编写一段程序,读取输入的整数值输出对应的*符号数量总和对应整数值.输入小于0的值时什么也不输出
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no, i;
	i = 0;
	printf("请输入一个正整数:");
	scanf("%d", &no);
	while(no-->0)
	{
		printf("*\n");
	} 
	if (no<=0)
	{
		;
	}

	return 0;
}
//别人的解题思路
int main()
{
    int no;
    int i = 0;

    printf("正整数：");
    scanf("%d", &no);

    while (i++ < no) {
        printf("*\n");
    }

    return 0;
}
//与我一开始写的对比
int main()
{
	int no, i;
	i = 0;
	printf("请输入一个正整数:");
	scanf("%d", &no);
	while(i<=no)//表达式不够准确导致输出的符号*总数量总数大于输入的值
	{
		i++;
		putchar('*');
	} 
	if (no<=0)
	{
		;
	}

	return 0;
}

