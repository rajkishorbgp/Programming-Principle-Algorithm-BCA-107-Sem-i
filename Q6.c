/*               program:-6
Write a c program to calculate the area and circumference of the circle.
                                        */
#include<stdint.h>
void main()
{
	float r,a,c;
	printf("Enter the radious:-  ");
	scanf("%f",&r);
	a=3.14*r*r;
	c=2*3.14*r;
	printf("Area= %f\n",a);
	printf("Circumference= %f\n",c);
}									   