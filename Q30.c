/*                program :- 30
Write a c program to find nCr factor of given number.
            nCr = n!/r!(n−r)!
                                                           */
#include<stdio.h>
int factorial(int);
void main()
{
    int i,n,r;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    printf("Enter the value of r= ");
    scanf("%d",&r);
    float sum=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%dC%d=%f",n,r,sum);

}
int factorial(int r)
{
    int i,f=1;
    for(i=1; i<=r; i++)
    {
        f=f*i;
    }return f;
    printf("%d",f);
}
