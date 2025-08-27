#include<stdio.h>
int main()
{
float grosssales ,allownces,deducations, netsales ;
printf("please enter grosssales:");
scanf("%f",&grosssales);
if (grosssales >10000)
{
allownces=0.1*grosssales;
deducations=0.03*grosssales;
netsales =grosssales +allownces-deducations;
printf("netsales  is:%.2f",netsales);
}
else{
if(grosssales >5000)
{
allownces=0.07*grosssales;
deducations=0.02*grosssales;
netsales =grosssales +allownces-deducations;
printf("netsales  is:%.2f",netsales);
}
else{
printf("please enter valid grosssales");
}
}

return 0;
}