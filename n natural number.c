#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter any number you want =");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("the sum of %d natural number is:%d",n,sum);
	
	
	
	return 0;
}
