#include<stdio.h>
int main()
{
	int mark[5],sum=0;
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter the marks of the subject: ");
		scanf("%d",&mark[i]);
		sum=sum+mark[i];
		
	}
	
	printf("the sum is %d",sum);
	
		printf("the average  is %d/n",sum/5);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
