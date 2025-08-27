#include<stdio.h>
int main ()
{
float sub1,sub2,sub3;
float sum,average;
printf("enter marks for sub1:");
scanf("%f",&sub1);
printf("enter marks for sub2:");
scanf("%f",&sub2);
printf("enter marks for sub3:");
scanf("%f",&sub3);
sum=sub1+sub2+sub3;
average=sum/2;
printf("total avarege of marks is%.2f\n",average);
if(sub1<35||sub2<35||sub3<35)
{
printf("Result:Fail");}
else{
if(average>70){
printf("Result:distinction");}
else{
if(average>60){
printf("Result:first");}
else{
if (average>50){
printf("Result:second");}
else{
if(average>=35){
printf("Result:third");}
else{
printf("Result:Fali");}
}
}
}
}
return 0;
}
