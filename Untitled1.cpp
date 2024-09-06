#include<stdio.h>
int main()

{
	int n,count=0,i;
	printf("enetr any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
		
	}
	if(count==2)
	{
		printf("%d is prime number",n);
		
	}
	else
	{
		printf("%d is not prime number",n);
	}
	
	
	return 0;
}
