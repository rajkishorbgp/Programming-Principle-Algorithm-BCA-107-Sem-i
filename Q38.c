    //               program:- 38 
//     Write a c program to calculate area of circle using call by value.
#include<stdio.h>
int area(float);
void main()
{
	float r,c;
	printf("Enter the radius:-  ");
	scanf("%f",&r);
    c =area(r);
    printf("%f is the area of the circle",c);
}
int area(float n)
{
	float c;
	c=3.14*n*n;
	return(c);
}