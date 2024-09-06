#include<stdio.h>
int main()
{
	int n,i=0,c=0;
	printf("enter any number");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	{
		printf("%d is prime",n);
	}
	else
	{
		printf("%d is not prime",n);
	}
	return 0;
	
		
		
	
	
	
	
	}
	
	

	
	
	


