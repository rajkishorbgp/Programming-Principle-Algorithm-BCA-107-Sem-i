//               program:- 39
//   Write a c program for swapping two numbers using call by reference.
#include<stdio.h>
void swapping(int * ,int *);
void main()
{
	int a=10,b=25;
	printf("a=%d\tb=%d\n\n",a,b);
	printf("-------after swapping valu-------\n\n");
    swapping(&a,&b);
	printf("a=%d\tb=%d",a,b);
}
void swapping(int * a ,int * b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
} 