// program:-40
// Write a c program to calculate the factorial of a number using recursion
#include<stdio.h>
int factorial(int);
void main()
{
	long unsigned int n;
	printf("Enter the number:-  ");
	scanf("%lu",&n);
	int s=factorial(n);
	printf("factorial = %lu",s);
}
int factorial (int r)
{
	int f=1,i;
	if (r==0)
	return 1;
	else
	return (r*factorial(r-1));
}
