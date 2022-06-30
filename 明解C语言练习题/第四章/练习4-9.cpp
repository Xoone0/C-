//明解C语言练习4-8
//编写一段程序,读取输入的整数值输出对应的+,-符号,+,-符号数量总和对应整数值.输入小于0的值时什么也不输出
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int no, i;
    i = 0;

    printf("正整数：");
    scanf("%d", &no);

    while (i++ < no) {
        if (i % 2)
        {
            putchar('+');
        }
        else {
            putchar('-');
        }

    }
    return 0;
}
/*这是从网上搜索的答案.自己敲得是下边的,有bug
一开始写的时候是从上一题的示例代码直接进行更改,while循环判断表达式为while(no-->0)
根据下行代码就出现了,如果把if语句中的判断表达式写成了(no%2==0)的话,读取到输入值为奇数那么就会先输出-
更改为if(no%==1)时,读取到输入值为偶数那么还是会先输出-*/
int main(void)
{
	int no;

	printf("正整数");
	scanf("%d", &no);
	if (no % 2 == 0)
	{
		while (no-- > 0)
		{
			if (no % 2 == 0)
			{
				printf("+");

			}
			else
			{
				printf("-");
			}

		}
	}
	else if (no%2==1)
	{
		while (no)
		{
			if (no % 2 == 1)
			{
				printf("+");

			}
			else
			{
				printf("-");
			}

		}

	}
	return 0;
}

