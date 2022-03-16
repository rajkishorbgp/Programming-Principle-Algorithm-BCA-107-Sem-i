/*                   Program21.
 Write a c program to calculate sum of first n numbers.
                                                                 */
#include<stdio.h>
void main()
{
	int i,n,s=0;
	printf("Enter the number:-  ");
	scanf("%d",&n);
	for ( i=1; i<=n; i++)
	{
		s=s+i;
	}
	printf("sum of first n number= %d",s);
	
}																