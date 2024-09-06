#include<stdio.h>
int main()
{
	 int g=0,i,x[1000],n;
	 printf("eneter any number");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&x[i]);
	 	if(g<x[i])
	 	{
	 		g=x[i];
		 }
		 
		 
	 }
	 printf("%d is gretaest",g);





return 0;
}

