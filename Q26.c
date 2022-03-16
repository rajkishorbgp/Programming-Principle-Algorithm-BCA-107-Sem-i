/*           Program:- 26. 
Write a c program to find the binary equivalent of the entered number.
                                                    */
#include<stdio.h>
void main()
{
	int n,s=0,d=1,a,r;
	printf("Enter the any Number:-  ");
	scanf("%d",&n);
	while (n)
	{
		r=n%2;
		n=n/2;
		s=s+d*r;
		d=d*10;
	}
	printf("Binary number= %d",s);
}												   