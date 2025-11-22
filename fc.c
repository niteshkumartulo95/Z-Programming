/* Write a c program to read fahrenheit and celcius and convert from fahrenheit to celcius and from celcius to fahrenheit */

#include<stdio.h>
int main()
{
	float fah,cel;
	printf("Enter the value of fahrenheit");
	scanf("%f",&fah);
	cel=(fah-32.0)*(5.0/9.0);
	printf("celcius is %f\n",cel);
	
	printf(" Enter the value of celcius");
	scanf("%f",&cel);
	fah=cel * (9.0/5.0)+32.0;
	printf("Fahrenheit is %f\n",fah);
}

