#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,s,c,a;
	printf(" enterthe principal value \n enter the rate \n enter the time period");
	scanf("%f %f %f",&p,&r,&t);
	s=(p*r*t)/100;
	printf(" the simple interest is %f",s);
	a=p*(pow(1+(float)(0.01*r),t));
	c=a-p;
	printf("the compound interest is %f",c);
	return(0);
}
