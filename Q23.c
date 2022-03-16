/*           Program:-23. 
Write a c program to determine whether a number is prime or not. A prime number 
is one, which is divisible only by 1 or itself
                                                                 */
#include<stdint.h>
void main()
{
	int i,n,s,a;
	printf("Enter the any number:-  ");
	scanf("%d",&n);
	a=n;
	for ( i=2; i<n; i++)
	{
	   if (n%i==0)
	   {
		 break;
	   }
	}
	if(a==i)
	{
	   printf("%d is a prime number",a);
	}
	else
	   printf("%d is a not prime number",a);	
}