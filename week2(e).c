//Distance traveelled by an object
#include<stdio.h>
int main()
{
	float u,a,d;
	int t;
	printf("enter the value of acceleration:");
	scanf("%f",&a);
	printf("ente the value of initial velocity:");
	scanf("%f",&u);
	printf("enter the value of time:");
	scanf("%d",&t);
	d=(u*t)+(a*t*t)/2;
	printf("the distance:%.2f",d);
	return 0;
}
