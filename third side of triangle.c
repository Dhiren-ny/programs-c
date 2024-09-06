#include<stdio.h>

int main()
{
	
	int a,b,c;
	printf("enter the first side of triangle:");
	scanff("%d",&a);
	printf("enter the second side of triangle:");
	scanff("%d",&b);
	c=180-a-b;
	printf("the third side of triangle is:%d",c);
	return 0;

	
}
