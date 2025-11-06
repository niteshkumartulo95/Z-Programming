/* Write a c program to calculate the radius of circle */

#include<stdio.h>
int main()
{

 float area,radius,pi;
 (pi=3.14);
 
  printf("Enter circle radius");
  scanf("%f",&radius);
   (area=pi*radius*radius);
   
   printf("area of circle %2f\n",area);
   
   return 0;
}
