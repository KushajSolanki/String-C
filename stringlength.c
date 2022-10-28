//program for length of string
#include<stdio.h>
#include<string.h>
main()
{
	char ch[100];
	int length;
	printf("Enter a Statement: \n");
	gets(ch);
	length=strlen(ch);
	printf("Lenght of the Statement is: %d",length);
}
