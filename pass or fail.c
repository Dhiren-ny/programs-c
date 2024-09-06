#include<stdio.h>
#include<math.h>
int main()
{
	
	int p;
	printf("enter the marks of math subject:");
	scanf("%d",&p);

	if(	p>=40 && p<=100 )
	{
		printf("you are pass ",p);
		
	}
	else if(p>=100)
	{
		printf("mask must be less than 100");
		
		
		
		
	}else 
	printf("you are fail");
	
	
	return 0;
}
