//明解C语言
//联系5-13
//修改5-13示例代码,将存储在tensu1,tensu2数组的分数存放在一个三维数组tensu1内
#define M 6
#define N 1
int main(void)
{
	int i, j, l;
	int tensu1[2][4][3] = { {{91,63,78},{67,72,46},{89,34,53},{32,54,34}},
		{{97,67,82},{73,43,46},{97,56,21}, {85,46,35}} };
	puts("第一次考试的分数");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			for (l = 0; l < 3; l++)
			{
				printf("%4d", tensu1[i][j][l]);
			}
			putchar('\n');
		}
	}
}
//自己刚开始写的错误了,并且存放在一个三维数组下相加不正确总数
int main(void)
{
	int i, j, l;
	int tensu1[2][4][3] = { { {91, 63, 78}, {67, 72, 46},{89, 34, 53}, {32, 54, 34}},{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} }
};
	int sum[8][1][3] = { 0 };
	for (i = 0; i < 8; i++) {							
		for (j = 0; j < 1; j++)							
			for (l = 0; l < 3; l++)
			{
				sum[i][j][l] += (tensu1[i][j][l]);	
				
			}
	}
	
	puts("第一次考试的分数");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 1; j++)
			for (l = 0; l < 3; l++)
			{
				printf("%4d", tensu1[i][j][l]);
			}
		putchar('\n');
	}

	/* 显示第二次考试的分数 */
	puts("第二次考试的分数");
	for (i = 4; i < 8; i++) {
		for (j = 0; j < 1; j++)/*这里的for语句没有跟大括号导致不执行
		没看别人的代码之前一直没发现*/
			for (l = 0; l < 3; l++)
			{
				printf("%4d", tensu1[i][j][l]);
			}
		putchar('\n');
	}

	/* 显示总分 */
	puts("总分");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 1; j++)
		{
			for (l = 0; l < 3; l++)
			{

				printf("%4d", sum[i][j][l]+=sum[i][j][l]);
			}
			putchar('\n');
		}