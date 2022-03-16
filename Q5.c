/*             program:-5
The distance between two cities (in km.) is input through the keyboard.
 Write a c program to convert and print this distance in meters,
                    feet, inches and centimetres.
					                                    */
#include<stdarg.h>
void main()
{
	float n,met,feet,inc,cm;
	printf("How many distance between two cities(in km ):-  ");
	scanf("%f",&n);
	met=n*1000;
	cm=n*1000*100;
	inc=n*1000*39.3700787;
	feet=n*1000*3.28084;
	printf("Meters= %f\n",met);
	printf("Inches= %f\n",inc);
	printf("Centimetres=%f\n",cm);
	printf("Feet =%f\n",feet);
}