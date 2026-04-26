#define _CRT_SECURE_NO_WARNINGS 1
#include "Contacts.h"
/*void Init(struct Concats* con)
{
	con->sz = 0;//szʼΪ0
	memset(con->date, 0, MAX *sizeof(struct Peopleinfo));//ʹmemsetṹʼ
}̬汾*/

void Cheks(struct Concats* con)
{
	if (con->sz == con->Capacity)
	{
		struct Peopleinfo* ptr = realloc((con->date), (Capicty + THREE) * sizeof(struct Peopleinfo));
		if (ptr != NULL)
		{
			con->date = ptr;
			con->Capacity += THREE;
			printf("ÿ:>ݳɹ\n");
		}
		else
		{
			perror("Addcon");

		}
	}
}

void Locad(struct Concats* con)
{
	FILE* pf = fopen("date.txt", "r");
	if (NULL==pf)	
	{
		perror("Locad");
		return;
	}
	struct Peopleinfo kukan = { 0 };
	while (fread(&kukan,sizeof(struct Peopleinfo),1,pf))
	{
		Cheks(con);
		con->date[con->sz] = kukan;
		con->sz++;
	}
	fclose(pf);
	pf = NULL;
}
void Init(struct Concats* con)
{
	con->date = (struct Peopleinfo*)malloc(Capicty * sizeof(struct Peopleinfo));
	if (con->date == NULL)
	{	
		perror("Init");
		return;
	}
	con->sz = 0;
	con->Capacity = Capicty;
	Locad(con);//ͨѶ¼
}

void Addcon(struct Concats* con)
{

	Cheks(con);
	printf(":>"); scanf("%s", con->date[con->sz].name);
	printf("Ա:>"); scanf("%s", con->date[con->sz].sex);
	printf(":>"); scanf("%d", &(con->date[con->sz].age));
	printf("ϵʽ:>"); scanf("%s", con->date[con->sz].tel);
	printf("סַ:>"); scanf("%s", con->date[con->sz].addr);
	printf("¼ɹ\n");
	con->sz++;
}

int Find(struct Concats* con, char name[])
{
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		if (0 == strcmp(con->date[i].name, name))
		{
			return i;
		}
	}
	return -1;

}
void Searchcon(struct Concats* con)
{
	char name[MAX_NAME];
	int ret = 0;
	printf("Ҫ:>");
	scanf("%s", name);
	ret = Find(con, name);
	if (-1 == ret)
	{
		printf("ûв鵽ָϵϢ\n");
	}
	else if(-1!=ret)
	{
		printf("%-10s\t%-5s\t%-10s\t%-20s\t%-20s\t\n", "", "Ա", "", "סַ", "ϵʽ");
		
		printf("%-10s\t%-5s\t%-10d\t%-20s\t%-20s\t\n", con->date[ret].name, con->date[ret].sex, con->date[ret].age
			, con->date[ret].addr, con->date[ret].tel);
	}
}

void Delete(struct Concats* con)
{
	printf("请输入要删除联系人姓名:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = Find(con, name);
	if (pos == -1)
	{
		printf("not found contact\n");
		return;
	}

	// 从被删除位置开始，后续元素向前覆盖
	for (int i = pos; i < con->sz - 1; i++)
	{
		con->date[i] = con->date[i + 1];
	}
	con->sz--;
	printf("delete success\n");
}

void Amend(struct Concats* con)
{
	char name[MAX_NAME];
	printf("Ҫ޸Ϣϵ:>");
	scanf("%s", name);
	int ret = Find(con, name);
	if (-1 == ret)
	{
		printf("ͨѶ¼ûиϵϢ\n");
	}
	else
	{
		printf("µ:>"); scanf("%s", con->date[ret].name);
		printf("µԱ:>"); scanf("%s", con->date[ret].sex);
		printf("µ:>"); scanf("%d", &con->date[ret].age);
		printf("µסַ:>"); scanf("%s", con->date[ret].addr);
		printf("µϵʽ:>"); scanf("%s", con->date[ret].tel);
		printf("ϵϢ޸ĳɹ\n");
	}
}


void show(struct Concats* con)
{
	int i = 0;
	if (con->sz == 0)
	{
		printf("κϵϢ\n");
		return;
	}
	printf("%-10s\t%-5s\t%-10s\t%-20s\t%-20s\t\n", "", "Ա", "", "סַ", "ϵʽ");
	for (i = 0; i < con->sz; i++)
	{
		printf("%-10s\t%-5s\t%-10d\t%-20s\t%-20s\t\n", con->date[i].name, con->date[i].sex, con->date[i].age
			, con->date[i].addr, con->date[i].tel);

	}
	return;
}

void Empty(struct Concats* con)
{
	con->sz = 0;//˴ֻǽռɾϵͨѶ¼Ϣ
	free(con->date);
	con->date = NULL;
	printf("ͨѶ¼\n");
	
}

int Cmpname(const void* a, const void* b)
{
	return strcmp(((struct Peopleinfo*)a)->name,  ((struct Peopleinfo*)b)->name);
}
	void Sort(struct Concats* con)
{
	qsort(con->date, con->sz, sizeof(struct Peopleinfo), Cmpname);
	printf("ѰִСϣ\n");
}

void save(struct Concats* con)
{
	FILE* pc = fopen("date.txt", "w");
	if (NULL==pc)
	{
		perror("save");
	}
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		fwrite(con->date + i, sizeof(struct Peopleinfo), 1, pc);
	}
	fclose(pc);
	pc = NULL;
}
