//program for structure
#include<stdio.h>
struct employee
{
	int contno,empno;
	char name[100];
}
main()
{
	struct employee s[3];
	int i;
	for(i=0;i<=2;i++)
	{
		printf("Enter Employee no. , Name and Contact Number: \n");
		scanf("%d%s%d",&s[i].empno,&s[i].name,&s[i].contno);
	}
	for(i=0;i<=2;i++)
	{
		printf("\n");
		printf("\nEmployee no. - %d\nName of Employee - %s\nContact Number: %d",s[i].empno,s[i].name,s[i].contno);
	}
}
