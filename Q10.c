/*            program:- 10
 Write a c program to check whether input number is positive or negative.
                                                  */
#include<stdarg.h>
void main()
{
	float n;
	printf("Enter the any number:-  ");
	scanf("%f",&n);
	if(n>0)
	    printf(" positive number.");
    else if(n<0)
	{
		printf(" negative number.");
	}
	else
	    printf(" zero.");

}												 
