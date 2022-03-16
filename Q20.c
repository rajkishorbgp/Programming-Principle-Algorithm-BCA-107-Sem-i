/*              Program:-20.
 If a number is input through the keyboard, write a c program to reverse the 
   number.
                                                    */
#include<stdint.h>
void main()
{
	int r,n,s=0,i;
    printf("Enter the any number:-  ");
	scanf("%d",&n);
	while (n>0)
	{
	   r=n%10;
	   n=n/10;
	   s=s*10+r;
	}
   printf("reverse number= %d",s);	
}