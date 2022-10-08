#include<stdio.h>
void main(){
	
	int i,p,n;
	float r;
	
	printf("Enter principle amount :");
	scanf("%d",&p);
	printf("Enter rate :");
	scanf("%f",&r);
	printf("Enter number of years :");
	scanf("%d",&n);
	
	i=p*r*n/100;
	
	printf("The simple instrest is :%d\n",i);
}