#include<stdio.h>
void main()
{
	int n,i,count=0,temp;
	printf("enter any number");
	scanf("%d",&n);
	temp=n;
	
	
	for (i=1;i<=n;i++)

{
	count++;
}
if(count==2)
{
	printf("%d is prime number",temp);
}
	else
	{
		printf("%d is not prime number",temp);
	}
	
	


	
	
	getch();
}
