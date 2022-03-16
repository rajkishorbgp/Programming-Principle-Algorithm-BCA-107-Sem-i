/*                 program:- 4
    Write a c program to perform arithmetic operation ( +, -, *, / ) on
      two integer number.       
                                 */
#include<stdio.h>
void main()
{
	int a,b,sum,sub,mul,div;
    printf("Enter the two number:-  ");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("Sum= %d\n",sum);
	printf("Subtraction= %d\n",sub);
	printf("Multiply= %d\n",mul);
	printf("Divide= %d\n",div);
}