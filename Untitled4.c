#include<stdio.h>
void main()
{
	int year,week,rm,days;
	printf("enter the days:");
	scanf("%d",&days);
   year=days/365;
   rm=days%365;
   week=rm/7;
   days=rm;
	
	printf("year%d week%d rm%d",year,rm,week,days);
	getch();
}
