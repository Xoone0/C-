#define _CRT_SECURE_NO_WARNINGS 1
#include "Contacts.h"
void menu()
{
	printf("****       RichGirl通讯录        ****\n");
	printf("*************************************\n");
	printf("*************************************\n");
	printf("*****1. Add           2. Search *****\n");
	printf("*****3. Del           4. Amend  *****\n");
	printf("*****5. Show          6. Empty  *****\n");
	printf("*****7. Sort          0. Exit   *****\n");
	printf("*************************************\n");
	printf("*************************************\n");


}
enum MyMENU
{
	EXIT,
	ADD,
	SEARCH,
	DEL,
	AMEND,
	SHOW,
	EMPTY,
	SORT
};
int main()
{
	int input = 0;
	struct Concats con;
	Init(&con);
	do
	{

		menu();
		scanf("%d", &input);
		switch (input)
			{
		case ADD:
			Addcon(&con); 
			break;
		case SEARCH:
			Searchcon(&con);
			break;
		case DEL:
			Delete(&con);
			break;
		case AMEND:
			Amend (&con);
			break;
		case SHOW:
			show(&con);
			break;
		case EMPTY:
			Empty(&con);
			break;
		case SORT:
			Sort(&con);
			break;
		case EXIT:
			save(&con);
			printf("退出通讯录\n");
			break;
			default:
				printf("输入有误，请重新选择\n");
				break;
			}
	} while (input);
}