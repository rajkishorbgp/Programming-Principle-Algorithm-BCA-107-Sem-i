/*                   Program:- 17. 
Write a c program to find the factorial value of any number
 entered through the keyboard.
                                                                    */
#include<stdarg.h>
void main()
{
	int n,f=1,i;
	printf("Enter the any number:-  ");
	scanf("%d",&n);
	for( i=n; i>=1; i--)
     {
		 f=f*i;
	 }
	 printf("factorial value =%d",f);

}																   