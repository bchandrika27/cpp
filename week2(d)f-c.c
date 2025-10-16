//Conversion of fahrenheit to celsius
#include<stdio.h>
main()
{
	float celsius,fahrenheit;
	printf("enter fahrenheit");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("tem in celsius %.2f",celsius);
}
