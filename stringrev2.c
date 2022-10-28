//Program for reverse string without strrev
#include<stdio.h>
#include<string.h>
main()
{
	char ch[100];
	int i;
	printf("Enter a Statement: \n");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		printf("%c",ch[i]);
	}
	printf("\nLength is %d\n",i);
	for(i=i-1;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
}
