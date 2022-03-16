/*             Program:- 9 
     Write a c program to calculate simple interest.
	                                                       */
#include<stdio.h>
void main()
{
	float amt,rate,time,si;
	printf("Enter the amount:-  ");
	scanf("%f",&amt);
	printf("Enter the annual interest rate:-  ");
	scanf("%f",&rate);
	printf("Enter the time (in years):-  ");
	scanf("%f",&time);
    si=(amt*rate*time)/100;
	printf("simple interest= %f",si);

}