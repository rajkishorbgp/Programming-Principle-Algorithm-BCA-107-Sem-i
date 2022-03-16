/* write a c programing to print out all asmstrong number between
1 to 500. if sum of cubes of each digit of the number is equal 
to the number itself, the number is called an armstrong number.
                                     */
#include<stdio.h>
void main()
{
    int n,i,d,a;
    printf("\n\t------ 1 to 500 Armstrong number -------");
      for(i=1;i<=500;i++)
	{
	  int sum=0;
	  n=i;
	   while(n>0)
        {
          d=n%10;
          n=n/10;
          sum=sum+(d*d*d);
        }
	   if(i==sum)
       printf("\n %d",sum);
	}
}