//Calculate Simple interest and compound interest
#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,si,ci;
	printf("enter principal amount(p):,time,rate");
	scanf("%f%f%f",&p,&t,&r);
/*Calculating Simple interest*/
    si=(p*t*r)/100.0;
/*Calculating Compound interest*/
    ci=p*(pow(1+r/100,t)-1);
	printf("simple interest=%.2f\n",si);
	printf("compound interest=%.2f",ci);    
}
