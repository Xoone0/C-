#define _CRT_SECURE_NO_WARNINGS 1
#include "Contacts.h"
void menu()
{
	printf("****       RichGirlͨѶ¼        ****\n");
	printf("*************************************\n");
	printf("*************************************\n");
	printf("*****1. Add           2. Search *****\n");
	printf("*****3. Del           4. Amend  *****\n");
	printf("*****5. Show          6. Empty  *****\n");
	printf("*****7. Sort          0. Exit   *****\n");
	printf("*************************************\n");
	printf("*************************************\n");


}
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
		case 1:
			Addcon(&con); 
			break;
		case 2:
			Searchcon(&con);
			break;
		case 3:
			Delete (&con);
			break;
		case 4:
			Amend(&con);
			break;
		case 5:
			show(&con);
			break;
		case 6:
			Empty(&con);
			break;
		case 7:
			Sort(&con);
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
			default:
				printf("��������������ѡ��\n");
				break;
			}
	} while (input);
}