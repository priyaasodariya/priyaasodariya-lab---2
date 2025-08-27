#include<stdio.h>
int main()
{
int x,y;
printf("enter a number :");
scanf("%d",&x);
if(x%7==0)
{
y=x/7;
printf("%d is divisible by 7 and answer is:%d",x,y);
}
else
printf("%dis not divisible by 7",x);
return 0;
}