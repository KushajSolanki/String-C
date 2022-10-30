//program for array of structures
#include<stdio.h>
struct student
{
	int i,rollno;
	char name[100];
	float percentage;
};
main()
{
	struct student s[3];
	int i;
	for(i=0;i<=2;i++)
	{
	printf("Enter Rollno. ,Name and Percentage of student: \n");
	scanf("%i%s%f",&s[i].rollno,&s[i].name,&s[i].percentage);
    }
    for(i=0;i<=2;i++)
    {
    	printf("\nRollno. - %d\nName - %s\nPercentage - %f\n",s[i].rollno,s[i].name,s[i].percentage);
	}
}
