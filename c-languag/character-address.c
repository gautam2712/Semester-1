#include <stdio.h>
void main()
{
	int i;
	char name[5];
	char *n=name;

	printf("enter name = ");
	scanf("%s",name);
	for(i=0;name[i]!='\0';i++)
	{
		printf("velue = %c,address = %u\n",*(n+i),(n+i));
	}
}