//program for structure
#include<stdio.h>
struct student
{
	int rollno;
	char name[100];
	float per;
};
main()
{
	struct student s1;
	printf("Enter rollno. ,name and percentage of student: \n");
	scanf("%d%s%f",&s1.rollno,&s1.name,&s1.per);
	
	printf("Rollno. - %d \nName - %s \nPercentage - %f",s1.rollno,s1.name,s1.per);
}

