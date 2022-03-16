/*              program:-12  
Any year is input through the keyboard. Write a c program to determine 
whether the year is a leap year or not. 
                                                                         */
 #include<stdio.h>
 void main()
 {
	 int n;
	 printf("Enter the any year:-  ");
	 scanf("%d",&n);
	 if (n%4==0)
	 {
	     printf("%d is a leep year.",n);
	 }
	 else
	 printf("%d is a not leep year.",n);
 }