#include<stdio.h>
void main(){
	
	float centigrate,ferenhit;
	
	printf("Enter the value in ferenhit :");
	scanf("%f",&ferenhit);
	
	centigrate=((ferenhit-32)*5)/9;
	
	printf("The temprature value in centigrate is %f\n",centigrate);
	
	printf("Enter the value in centigrate :");
	scanf("%f",&centigrate);
	
	ferenhit=(centigrate*9/5)+32;
	
	printf("The temprature value in ferenhit is %f\n",ferenhit);
	
	}