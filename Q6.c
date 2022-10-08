#include<stdio.h>
void main(){
	
	float r,area,circumference;
	
	printf("Enter the radius of circle :");
	scanf("%f",&r);
	
	area=3.14*r*r;
	circumference=2*3.14*r;
	
	printf("The area of circle is :%f\n",area);
	printf("The circumference of circle is :%f\n",circumference);
	
	}