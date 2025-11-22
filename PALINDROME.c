/* Write a c program to check whether the given number is palindrome or not */

#include<stdio.h>
int main()
{
	int num,rev=0,rem,temp;
	printf("Enter any integer number");
	scanf("%d",&num);
	
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
      if(temp==rev)
      
      printf("\nThe the give number %d is palindrome",temp);
      else
      printf("\nThe the given number %d is not a palindrome",temp);
  }
