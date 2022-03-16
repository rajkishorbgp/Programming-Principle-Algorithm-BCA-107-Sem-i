//                          program:- 7
//Write a c program to interchange the value of two variables using third variable.
#include<stdarg.h>
void main()
{
	int a,b,c;
	printf("Enter the two number(a&b):-  ");
	scanf("%d%d",&a,&b);
	printf("Befor interchange the value\na=%d\tb=%d\n",a,b);
    c=a;
	a=b;
	b=c;
	printf("After interchange the value\na=%d\tb=%d",a,b);
}