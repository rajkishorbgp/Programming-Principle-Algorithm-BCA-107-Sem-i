/*                   Program:- 16.
            Write a c program to print table of any number.
			                                                       */
#include<stdint.h>
void main()
{
	int n,i;
    printf("Enter the table of any number:-  ");
	scanf("%d",&n);
	for ( i = 1; i<=10; i++)
	{
		printf("%d*%d=%d\n",n,i,(n*i));    
	}
}																  
