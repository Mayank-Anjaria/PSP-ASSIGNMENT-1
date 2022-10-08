#include<stdio.h>
void main(){
	
	float l,w,area,perimeter;
	
	printf("Enter the value of l :");
	scanf("%f",&l);
	printf("Enter the value of w :");
	scanf("%f",&w);
	
	area=l*w;
	perimeter=2*(l+w);
	
	printf("The area of rectangle is :%f\n",area);
	printf("The perimeter of rectangle is :%f\n",perimeter);
	
	}