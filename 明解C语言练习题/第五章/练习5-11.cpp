//明解C语言
//联系5-11
//编写一段程序,输入六名同学的语文,数学分数.并输出平均分和总分,在输出每个学生的平均分与总分
#define M 6
#define N 1
int main()
{
	int a[M][N];
	int b[M][N];
	int l[M][N];
	int sum = 0;
	int num = 0;
	int i, j;
	printf("请输入六名学生人的语文与数学成绩:\n");
	for (i = 0; i < M; i++)
	{
		for ( j = 0; j < 1; j++)
		{
			printf("\n第%d名语文成绩:",i+1);
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < 1; j++)
		{
			printf("\n第%d名数学成绩:", i+1);
			scanf("%d", &b[i][j]);
		}
	}

	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < 6; j++)
		{
			sum += a[i][j];
			num += b[i][j];
		}
	}
	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < 6; j++)
		{
			l[i][j] = (a[i][j] + b[i][j]) / 2;
		}
	}
	printf("六名同学各自的平均分与各科目分数:\n");
	printf("--------------------------------------\n");
	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("\n%d号同学数学分数为%d\n语文分数为%d\n同学平均分为%d\n", j+1,b[i][j],a[i][j],l[i][j]);

		}
	}
	printf("语文数学总分与平均分\n");
	printf("-------------------------");
	printf("\n语文总分为%d平均分为%.2f\n", sum, (double)sum / 6);
	printf("\n数学总分为%d平均分为%.2f\n", num, (double)num / 6);
	return 0;
}
//这段代码最后两段是从CSDN上面抄写的,现在看不懂这个运算逻辑