/* Write a c program to evaluate the following expression a/b*c-b+a*d/3 */

#include<stdio.h>
int main()
{
	int a,b,c,d,result;
	
	printf("Enter the value of a");
	scanf("%d",&a);
	
	printf("Enter the value of b");
	scanf("%d",&b);
	 
	printf("Enter the value of c");
	scanf("%d",&c);
	
	printf("Enter the value of d");
	scanf("%d",&d);
	
    result=a/b*c-b+a*d/3;
    
    printf("%d",result);
    
    return 0;  
}
