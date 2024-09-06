#include<stdio.h>
int main()
{
int subject[5],i,total=0,average=0;

for(i=0;i<5;i++)
{
	printf("enter the marks of the subject");
	
	scanf("%d",&subject[i]);
	total=total+subject;
	
	}
	average=total/5;
	printf("the total marks is  =%d",total);
	printf("the average =%d",average);
		
	
	
	
	
	
	
	
return 0;	
}
