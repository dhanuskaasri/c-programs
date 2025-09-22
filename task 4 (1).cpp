#include<stdio.h>
int main(){
	char name[50];
	int age;
	float marks;
	
	printf("enter your name:");
	scanf("%s",name);
	printf("enter your age:");
	scanf("%d,&age");
	printf("enter yoru marks:");
	scanf("%f",&marks);
	
	printf("\n---student details---\n");
	printf("name :%S\n",name);
	printf("age :d\n",age);
	printf("mark :%.2\n",marks);
	
	return 0;
}