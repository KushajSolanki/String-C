//program for camparing string
#include<stdio.h>
#include<string.h>
main()
{
	char s1[100],s2[100];
	int ans;
	printf("Enter 2 Statements: \n");
	gets(s1);
	gets(s2);
	ans=strcmp(s1,s2);
	printf("Ans is %d",ans);
	/*
	ABC==ABC=0
	DDD>ABC=1
	AAA<DDD=-1
	ABC<ADC=1
	*/
}
