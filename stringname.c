#include<stdio.h>
#include<string.h>
main()
{
	char ch[100];
	int i;
	printf("Enter a Name: \n");
	//scanf("%s",ch);
	gets(ch);
	//printf("%s",ch);
	//puts(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		printf("%c",ch[i]);
	}
}
