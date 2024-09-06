#include<stdio.h>
void main()
{
	int n,i,ni;
	printf("enter any number");
	scanf("%d",&n);
	
	
	for (i=1;i<=10;i=i+1)
	{
		ni=n*i;
		printf("%d X %d = %d \n",n,i,ni);
	}
	return 0;
}
