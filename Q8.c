/*                     Program:- 8
 Write a c program to interchange the value of two variables without using
  third variable.
                                  */
#include<stdint.h>
void main()
{
	int a,b;
	printf("Enter the value of a and b :-  ");
	scanf("%d%d",&a,&b);
	printf("Befor interchange the value\na=%d\tb=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After interchange the value\na=%d\tb=%d",a,b);
}								 