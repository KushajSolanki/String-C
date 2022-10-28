//program for copy string
#include<stdio.h>
#include<string.h>
main()
{
	char s1[100],s2[100];
	printf("Enter 2 Statements: \n");
	gets(s1);
	gets(s2);
	strcpy(s1,s2);
	//s1 turned into s2;
	puts(s1);
}
