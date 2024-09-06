#include<stdio.h>
int main()
{
	int age[10],c=0,i;
	for(i=0;i<10;i++)
	{
		printf("enter the age of people");
		scanf("%d",&age[i]);
		
	}
	for(i=0;i<10;i++)
	{
		if(age[i]>=16 && age[i]<=20)
		{
			c++;
		}
	}
	printf("the number of people betweeen 16 to 20 =%d",c);
	
	
	
	
	
	
return 0;
}
