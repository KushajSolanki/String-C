//program for student city classification
#include<stdio.h>
struct student
{
	int rollno;
	char c[100],name[100],city[100];
}
main()
{
	struct student s[2];
	int i,j;
	int ans;
	char c[100];
    for(i=0;i<=2;i++)
	{
		printf("Enter Roll no. , Name and City: \n");
		scanf("%d%s%s",&s[i].rollno,&s[i].name,&s[i].city);
	}
	 for(i=0;i<=2;i++)
    {
    	printf("\nRollno. - %d\nName - %s\nCity - %s\n",s[i].rollno,s[i].name,s[i].city);
	}
	printf("\nEnter the Name of city: \n");
	scanf("%s",&c);
	for(i=0;i<=2;i++)
	{
		strlwr(s[i].city);
		strlwr(c);
		ans=strcmp(s[i].city,c);
		if(ans==0)
		{
				printf("\nRollno. - %d\nName - %s\nCity - %s\n",s[i].rollno,s[i].name,s[i].city);
		}
	}
}

