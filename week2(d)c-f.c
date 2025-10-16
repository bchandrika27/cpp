//Conversion of celsius to fahrenheit
#include<stdio.h>
main()
{
	float celsius,fahrenheit;
	printf("enter celsius");
	scanf("%f",&celsius);
	fahrenheit=(celsius*1.8)+32;
	printf("fahrenheit %.2f",fahrenheit);
}
