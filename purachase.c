#include<stdio.h>
int main()

{
	int n,a,b;
	printf("enter any number :");
	scanf("%d",&a);
	a=n%5;
	b=n%7;
	 
	
	
	
	if(a==0 && b==0 )
	{
		printf(" it is divisble by 5 and 6",a,b);
		
	
	}
	else
	{
		printf("it is not divisble by 7 and 6",a,b);
	}
	return 0;
	
}
