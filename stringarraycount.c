//program for counting string characters
#include<stdio.h>
#include<string.h>
main()
{
	char c,ch[100];
	int count=0,i;
	printf("Enter Statement: \n");
	gets(ch);
	strupr(ch);
	strlwr(ch);
	printf("\nEnter the character : \n");
	scanf("%c",&c);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==c)
		{
			count++;
		}
	}
	printf("Count is %d",count);
}
