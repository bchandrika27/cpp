#include<stdio.h>
int sum(int);
int super(int);
int sum(int n)
{
	int r,s=0;
	while(n!=0)
	{
		r=n%10;
		s+=r;
		n/=10;
	}
	return s;
}
int super(int n)
{
	int r,d;
	while(n>9)
	{
		d=0;
		while(n!=0)
		{
			r=n%10;
			d+=r;
			n/=10;
		}
		n=d;
	}
	return n;
}
int main()
{
	int n,k;
	printf("enter n and k values:");
	scanf("%d%d",&n,&k);
	printf("super digit=%d",super(sum(n)*k));
	return 0;
}
