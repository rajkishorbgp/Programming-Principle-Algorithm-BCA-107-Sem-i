/*         Program:- 18.
Two numbers are entered through the keyboard. Write a c program to find the 
value of one number raised to the power of another.         
                                                                */
#include<stdarg.h>
void main()
{
	int i,s=1,n,p;
	printf("Enter the number:-  ");
	scanf("%d",&n);
	printf("Enter the power:-  ");
	scanf("%d",&p);
	for(i=1; i<=p; i++)
	{
         s=s*n;
	}
	printf("sum= %d",s);
}															   
