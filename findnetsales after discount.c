#include<stdio.h>
int main()
{
float grosssales ,discount, netsales ;
printf("please enter grosssales:");
scanf("%f",&grosssales);
if (grosssales >20000)
{
discount=0.15;
}
else{
if(grosssales >10000)
{
discount=0.1;
}
else{
discount=0.05;
}
}
netsales =grosssales -(grosssales *discount );
printf("grosssales is:%.2f\n",grosssales);
printf("discount is:%.2f\n",discount);
printf("netsales  is:%.2f",netsales);
return 0;
}