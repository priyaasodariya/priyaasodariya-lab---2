#include<stdio.h>
int main()
{
int x,y;
printf("please enter two number");
scanf("%d %d",&x,&y);
if(x>y)
    {
printf("%d is largest than %d",x,y);
}
else
{
printf("%d is largest than %d",y,x);
}
return 0;
}
