#include<stdio.h>
void main(){
	
	int a,b,temp;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	printf("Value befor swaping of a is :%d\n",a);
	printf("Value befor swaping of b is :%d\n",b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("The swap value is %d and %d\n",a,b);
	
	}