//明解C语言练习1-7
//使用printf纵向输出"天"地"人"
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	
	printf("天\n");
	printf("地\n");
	printf("人");
	return 0;
}

//另一种写法为
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	
	printf("天\n地\n人");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	
	puts("天");
	puts("地");
	puts("人");
	return 0;
}

/*本节代码问题
1.puts函数功能与printf("\n")相同，\n为自动输出，不用认为填写
与printf区别是
1.printf可以进行格式设定和数值的输出等，且\n需要手动设置
2.puts不可以进行格式设定和数值输出等，\n自动输出
其次 puts函数的实参只能有一个，并且%符号的使用方法用printf不同