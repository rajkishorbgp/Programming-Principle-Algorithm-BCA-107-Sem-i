     /*           program :- 36.  
        Write a menu driven program which has following options: 
        1. Factorial of a number.  
        2. Prime or not 
        3. Odd or even  
        4. Exit
                                               */
#include<stdio.h>
void main()
{
    int n;
    do
    {   printf("1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4. Exit\n");
        printf("\nChoose the option(1,2,3,4):-  ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            {
                int i,a,f=1;
                printf("\nEnter the number:- ");
                scanf("%d",&a);
                for(i=1; i<=a; i++)
                {
                    f=f*i;
                }
                printf("Factorial = %d\n\n",f);
                break;
            }
        case 2:
            {
                int i,a,b,j,n;
                printf("\nEnter the number:-  ");
                scanf("%d",&n);
                for ( i=2; i<n; i++)
                {
                    if(n%i==0)
                    {
                        break;
                    }
                }
                if(n==i)
                printf("%d is Prime number\n\n",n);
                else
                printf("%d is not prime number\n\n",n);
                break;
            }
        case 3:
            {
                int i,j,n;
                printf("\nEnter the number:-  ");
                scanf("%d",&n);
                if(n%2==0)
                {
                    printf("%d is Even number\n\n",n);
                }
                else
                {
                    printf("%d is Odd number\n\n",n);
                }
                break;
            }
        case 4:
            {
                  exit(0);
                  break;
            }
        }
    }while(1);
}
