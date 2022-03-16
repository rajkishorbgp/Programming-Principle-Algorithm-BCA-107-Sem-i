/*           program:-34
  Write a c program to print following pattern:
     1
    2 3
   4 5 6
  7 8 9 10
                    */
 #include<stdio.h>
void main()
{
    int i,a=1,k,j;
    for(i=1; i<=4; i++)
    {
        for(k=1; k<=4-i; k++)
        {
            printf(" ");
         }
        for(j=1; j<=i; j++)

          {
              printf("%d ",a);
              a++;
           }
       printf("\n");
    }
}
