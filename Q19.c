/*                         Program:-19. 
If a number is input through the keyboard, write a c program to calculate 
the sum of its digits.
                                                           */
#include<stdio.h>
void main()
{
	int n,r,s=0;
	printf("Enter the any number:-  ");
	scanf("%d",&n);
	while (n>0)
	{
		r=n%10;
		n=n/10;
        s=s+r;
	}
	printf("sum of its digit =%d",s);
}