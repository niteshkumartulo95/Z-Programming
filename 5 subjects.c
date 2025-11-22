/* Write a c program to read 5 subjects marks and display the average */

#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,avg;
	
	printf("Enter the marks of sub1,sub2,sub3,sub4,sub5");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	 
	 avg=(sub1+sub2+sub3+sub4+sub5)/5;
	 printf("the avg is %d",avg);
	 
	 return 0;
}
