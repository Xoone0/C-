void menu()
{
	printf("***********************\n");
	printf("***********************\n");
	printf("******  1.play   ******\n");
	printf("******  0.exit   ******\n");
	printf("***********************\n");
	printf("***********************\n");


}

void game()
{
	int input = 1;
	int number = rand() % 100 + 1;
	printf("猜数字\n");
	while (1)
	{
		printf("请猜数字>");
		scanf("%d", &input);
		if (input > number)
		{
			printf("猜大了\n");
		}
		else if (input < number)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你！猜中了数字为%d\n", number);
			break;
		}
	}
}

int main()
{
	int n;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！");
			break;
		default:
			printf("选择错误！请重新选择\n");
			break;
		}
	} while (n);
	return 0;
}
