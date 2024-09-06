#include<stdio.h>
int main()
{
	int sum=0,a[10],i,n;
	printf("how many number you want");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("enter any number");
	scanf("%d",&a[i]);
	
	}
	for(i=0;i<=n;i++)
	printf("%d \t",a[i]);
	sum=sum+a[i];
	printf("%d sum",sum);





return 0;
	}
	
