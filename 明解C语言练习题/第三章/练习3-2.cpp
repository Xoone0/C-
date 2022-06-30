//明解C语言练习3-1
//将下列代码else改为 else if(no<0)看结果
define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no == 0)
		puts("该整数为0。");
	else if (no > 0)
		puts("该整数为正数。");
	else
		puts("该整数为负数。");

	return 0;
}

//更改后
define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no == 0)
		puts("该整数为0。");
	else if (no > 0)
		puts("该整数为正数。");
	else if (no < 0)
		puts("该整数为负数。");

	return 0;
}
/*无任何改变，只不过在语义上有所差距，例如未更改的代码如果输入的不是一个整数值他就会输出else的结果
但是更改后的代码增加了条件,必须为小于0的整数,若输入非整数则直接跳过该语句什么也不执行(ASCILL在这里没有用,不是这种用法)