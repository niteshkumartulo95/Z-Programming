/*write a c program to read and display to perform addition of two integer numbers and two real numbers */

#include<stdio.h>
int main()
{
	int num1,num2,add,diff;
	float n1,n2,sum,sub;
	printf("Enter any two integer numbers");
    scanf("%d%d",&num1,num2);
	 sum=n1+n2;
	 diff=n1-n2;
	 printf("Real numbers addition is %d/n ",add);
	 printf("Real numbers subtraction is %d/n",diff);
           
	printf("Enter any two real numbers");	
	scanf("%f%f",&n1,&n2);
	sum=n1+n2;
    sub=n1-n2;
	printf("Real numbers addition is %f/n",sum );
	printf("Real numbers subtraction is %f/n",sub);
	return 0;
}
