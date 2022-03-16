/*         Prohram:- 25. 
Write a c program to determine whether a number is palindrome or not.
                                                                 */
#include<stdio.h>
void main()
{
int a,b,c=0,r;
printf("Enter the any number:-");
scanf("%d",&a);
b=a;
while(a!=0)
{
  r=a%10;
  c=c*10+r;
  a=a/10;
}
 if(b==c)
 printf("%d is palindrome number",c);
 else
 printf("%d is not palindrome number",b);
}
