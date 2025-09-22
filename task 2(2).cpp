#include<stdio.h>
int main(){
	int a,b;
	printf("enter two integers:",a);
	scanf("%d",&a);
	printf("enter two integers:",b);
	scanf("%d",&b);
	printf("\nbefore swapping:a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping:a=%d,b=%d\n",a,b);
	return 0;
	
}