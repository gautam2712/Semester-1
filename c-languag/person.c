#include<stdio.h>
struct person
{
	char name[50];
	char date[10];
	int salary;	
};

void main()
{
	struct person data[5];
	int i;

	for(i=0;i<5;i++)
	{
		printf("enter %d your name = ",i+1);
		scanf("%s",data[i].name);

		printf("enter %d person joining date = ",i+1);
		scanf("%s",data[i].date);

		printf("enter %d person salary = ",i+1);
		scanf("%d",&data[i].salary);
	}

	for(i=0;i<5;i++)
	{
		printf("%d name = %s\n",i+1,data[i].name);
		
		printf("%d person joining date = %s\n",i+1,data[i].date);

		printf("%d person salary = %d\n",i+1,data[i].salary);
		
	}
}