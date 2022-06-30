//明解C语言练习4-6
//编写一段程序,读取输入值并显示小于输入值的所有正偶数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 0;
	while (i <= no)
		printf("%d ", i++);		/* i的值在显示之后递增 */
	printf("\n");				/* 换行 */

	return 0;
}

//更改后
int main()
{
	int i, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 0;
	do
	{
		i++;
		if (i%2==0)
		{
			printf("%3d", i);
		}
	} while (i<no);
	return 0;
}

//别人的解题思路,看完感觉自己好蠢
int main()

{
    int i, no;
    printf("请输入一个正整数：");
    scanf("%d", &no);

    i = 0;
    while (i + 2 < no) {
        i += 2;
        printf("%d ", i);
    }
    printf("\n");

    return 0;

}
