/*Write a c program to calculate distance travelled by an object */

#include<stdio.h>
int main()
{
  float vel,acc,dist;
  int time;
  
    printf("Enter value of velocity(u):");
    scanf("%f",&vel);
    
    printf("Enter value of acceleration(a):");
    scanf("%f",&acc);
    
    printf("Enter value of time(t):");
    scanf("f",&time);
    
    dist=(vel*time)+(acc*time*time)/2;
    
    printf("The distance is %f",dist);
}
