#include<stdio.h>
int main()
{
	int p,c,n,e,che,m,percentage;
 printf("enter the marks of physics=");
 scanf(" %d",&p);
  printf(" enter the marks of computer =");
 scanf("%d",&c);
  
    printf(" enter the marks of nepali =");
   scanf("%d",&n);
   
   printf(" enter the marks of english =");
   scanf("%d",&e);
   
    printf("enter the marks of chemistry =");
     scanf(" %d",&che);
       printf("enter the marks of math =");
        scanf(" %d",&m);
       
     
     if(p>=30 && c>=30 && n>=30 && che>=30 && m>=30 && e>=30)
     {
     	printf("you are pass");
     	
	 }
     else
     {
     	printf("you are fail");
	 }
     
 percentage=(p+c+n+che+m+e)/4;
 printf("\nyour percentage is=%d",percentage);
 if( percentage>=80 &&  percentage<=100)
 {
 	printf("\ncongratulation you got Distinction");
 }
 else if(percentage>=60 &&percentage<80)
 {
 	printf("\nyou got first division");
 }
 else if(percentage>=50 && percentage<60)
 {
 		printf("\nyou got second division");
 }
 else if(percentage>=40 && percentage<50)
 {
 	printf("\nyou got third division");
 }
   else
   {
   	printf("\nyou are fail");
   }
   
   
  
  
  
 
	
	return 0;
}
