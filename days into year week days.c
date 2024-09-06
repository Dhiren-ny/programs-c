#include<stdio.h>
void main()
{
	int year,week,rm,days;
	printf("enter the days:");
	scanf("%d",&days);
	year=days/365;
	week=days/(year*365);
	days=days-((year*365)+(week*7));
	
	
	printf("year%d week%d rm%d",year,week,days);
	getch();
}
