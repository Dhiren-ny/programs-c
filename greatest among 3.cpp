#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter number");
	scanf("%d",&a);
	printf("enter number");
	scanf("%d",&b);
	printf("enter number");
		scanf("%d",&c);
	if (a>b && a>c)
	{
		printf("%d is greatest",a);
	}
	else if (b>a && b>c)
	{
	printf("%d is greatest",b);
	}
	
	else
	{
		printf("%d is greatest",c);
	}
	
	
	
	
	return 0;
}
