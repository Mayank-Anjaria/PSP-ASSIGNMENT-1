#include<stdio.h>
void main(){
	
	float r,h,volume;
	
	printf("Enter the value of r :");
	scanf("%f",&r);
	printf("Enter the value of h :");
	scanf("%f",&h);
	
	volume=3.14*r*r*h;
	
	printf("The volume of cylinder is :%f\n",volume);
	
	}