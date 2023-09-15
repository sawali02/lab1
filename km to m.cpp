#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the number");
scanf("%d",&a);
b=a*1000;
c=b*100;
d=c*10;
printf("the number in meter is %dm \n",b); 

printf("the number in centimetre is %dcm \n",c); 

printf("the number in milimetre is  %dmm \n",d); 
return(0);
}
