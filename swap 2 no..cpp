#include<stdio.h>
int main(){
	int a,b;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	printf("after swaping the numbers, the result is %d ",(b-a)+a);
	printf("%d",(a-b)+b);
	return(0);
}
