#include<stdio.h>
void main()
{
	int rm,mintue,hour,second;
	printf("enter time in second ");
	scanf("%d",&second);
	hour=second/3600;
	mintue=second/60;
	rm=second%3600;
	printf("hour=%d mintue=%d reaming second=%d",hour,mintue,rm);
	
	
	
	
	getch();
}
