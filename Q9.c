#include<stdio.h>
void main(){
	
	int n1,n2,n3,n4,n5;
	float p,sum,avg;
	
	printf("\nEnter the value of n1 :");
	scanf("%d",&n1);
	printf("\nEnter the value of n2 :");
	scanf("%d",&n2);
	printf("\nEnter the value of n3 :");
	scanf("%d",&n3);
	printf("\nEnter the value of n4 :");
	scanf("%d",&n4);
	printf("\nEnter the value of n5 :");
	scanf("%d",&n5);
	
	sum=n1+n2+n3+n4+n5;
	printf("\nThe sum of 5 subject is :%f\n",sum);
	
	avg=sum/5;
	printf("The average of 5 subject is :%f\n",avg);
	
	p=(sum)*100/500;
	printf("The percentage of 5 subject is %f\n",p);	
	
	}	