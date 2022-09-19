void put_chars(int n,int ch)
{
	while (n-- > 0)
	{
		putchar(ch);

	}

}

int main()
{
	int len, i;
	printf("等腰直角三角形生成器！");
	printf("请输入短边：");
	scanf("%d", &len);
	for (i = 0; i < len; i++)
	{
		put_chars(' ', len - i);
		put_chars('*', i);
		putchar('\n');
	}
}


/*重点！！
函数定义变量时注意顺序,上面的顺序是错误的,输出会输出乱码
因为ch,i的位置有误,正确写法如下所示,并且for语句的判断表达式
内必须将i初始化1小于等于len。不然会第一行空一格因为i=0并且不等于len就会少输出一行*/
void put_chars(int ch,int n)
{
	while (n-- > 0)
	{
		putchar(ch);

	}

}

int main()
{
	int len, i;
	printf("等腰直角三角形生成器！");
	printf("请输入边长：");
	scanf("%d", &len);
	for (i = 1; i <= len; i++)
	{
		put_chars(' ', len - i);
		put_chars('*', i);
		putchar('\n');
	}
}

