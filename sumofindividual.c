#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("enter an integer\n");
	scanf("%d",&n);
	while(n!=0)
	{
	  r=n%10;
	  sum=sum+r;
	  n=n/10;
	}
	printf("\n Sum of digits=%d",sum);
	return 0;
}
