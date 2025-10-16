#include<stdio.h>
int main()
{
	int i=1,n,factors=0;
	printf("enter an integer \n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{factors=factors+1;}
		i++;
	}
	if(factors==2)
	printf("prime");
	else
	printf("not a prime");
	return 0;
}
