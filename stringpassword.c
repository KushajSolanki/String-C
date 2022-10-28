//program for passwords
#include<stdio.h>
#include<string.h>
main()
{
	char ch[100];
	int length;
	printf("Enter your Password: \n");
	gets(ch);
	length=strlen(ch);
	if(length>=8)
	{
		printf("\nValid Password");
	}
	else
	{
		printf("\nInvalid Password");
	}
}
