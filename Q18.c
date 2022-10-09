#include<stdio.h>
void main(){
	
	int a,b,c,d,e,x;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	printf("Enter the value of d : ");
	scanf("%d",&d);
	printf("Enter the value of e : ");
	scanf("%d",&e);
	
	x=(a+b*c)/(d+e);
	
	printf("The expression answer is :%d\n",x);
	
	}