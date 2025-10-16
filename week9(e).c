#include<stdio.h>
int gcd(int a,int b)
{
	
	int i,gd = 1;
	for(i=2;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		   gd=i;
	}
	return gd;
}
int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}
int main()
{ int a,b;
printf("enter a,b values");
scanf("%d %d",&a,&b);
printf("lcm is %d",lcm(a,b));
return 0;
}
