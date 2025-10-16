#include<stdio.h>
main()
{
	int t,h,e,m,s,total;
	printf("the marks of t are:");
	scanf("%d",&t);
	printf("the marks of h are:");
	scanf("%d",&h);
	printf("the marks of e are:");
	scanf("%d",&e);
	printf("the marks of m are:");
	scanf("%d",&m);
	printf("the marks of s are:");
	scanf("%d",&s);
	total=t+h+e+m+s;
	printf("the total marks are: %d\n",total);
	float average;
	average=total/5;
	printf("the average marks are:%.1f",average);
}
