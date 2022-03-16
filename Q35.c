//        program:- 35 
     //     Write a c program to print Pascal triangle.
#include<stdio.h>
void main()
{
    int i,n,j,c;
    printf("How many rows you want to show in pascal triangle?\n  :-");
    scanf("%d",&n);
    for ( i=0; i<n; i++)
    {
        for(c=1; c<(n-i); c++ )
        {
          printf(" ");
        }
        for( j=0; j<=i; j++ )
         {
           if (j==0||i==0)
           {
					  c=1;
            printf("%d ",c);
           }
           else
		        {
               c=c*(i-j+1)/j;
		           printf("%d ",c);
		        }
         }  
       printf("\n");		 
    }
}