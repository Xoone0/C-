//明解C语言练习4-15
//不知道怎么描述,自己翻开课本看吧,看代码也行,正好别一直看图例
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("请输入开始身高:"); scanf("%d", &a);
	printf("请输入结束身高:"); scanf("%d", &b);
	printf("请输入间隔:"); scanf("%d", &c);
	int num = 0;
	for ( num= a; num <= b;)
	{
	
		printf("%dcm  %.2fkg\n", num, (double)(num - 100) * 0.9);
		num += c;

	}

	return 0;
}
//不看答案,宁愿看示例代码！淦