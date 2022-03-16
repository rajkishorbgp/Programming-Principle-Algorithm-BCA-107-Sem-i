/*           program:- 11   
Write a c program to check whether input number is even or odd.   */
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the any integer number:-  ");
	scanf("%d",&n);
	if (n%2==0)
	{
		printf("%d is a Even number",n);
	}
	else
	    printf("%d is a Odd number",n);
	
}