//明解C语言练习3-5
//编写一段程序,确认相等运算符=和关系运算符的结果是1和0
define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, d1, d2;

    printf("请输入两个整数:");
    scanf("%d %d", &d1, &d2);
    a = (d1 >= d2);
    b = (d1 == d2);
    c = (d1 <= d2);
    d = (d1 != d2);
    e = (d1 > d2);
    f = (d1 < d2);
    printf("%d %d %d %d %d %d", a, b, c, d, e, f);

    return 0;
}
/*这题没看懂是什么意思从网上摘抄的答案.
大致意思就是通过关系运算符和相等运算符来输出1.0这两个数值