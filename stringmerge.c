//program fro string merge
#include<stdio.h>
#include<string.h>
main()
{
	char s1[100],s2[100];
	printf("Enter 2 Names: \n");
	gets(s1);
	gets(s2);
	strcat(s1,s2);
	puts(s1);
}
