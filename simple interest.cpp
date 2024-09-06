#include<stdio.h>
int main()
{
	float p,t,r,si;
	printf("enter the value of princple time and rate:");
	scanf("%f%f%f%f",p,t,r,si);
	si=p*t*r;
	printf("the value of si=%.2f",si);
	
	
	return 0;
}
