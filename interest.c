/* Write a c program to find simple compound interest */

#include<stdio.h>
int main()
{ 
    float P,R,T;
    float SI,CI,Amount;
     
     printf("Enter principal amount(P)");
     scanf("%f",&P);
     
     printf("Enter rate of interest(R in %):");
     scanf("%f",&R);
     
     printf("Enter time(Time in years)");
     scanf("%f",&T);
     
     SI=(P*R*T)/100;
	 
	 Amount=P*((1+R/100),T);
	 CI=Amount-P;
	 
	 printf("\nSimple interest=%.2f\n",SI);
	 printf("Compound interest=%.2f\n",CI);
	 
	 return 0;
}
