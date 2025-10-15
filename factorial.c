#include<stdio.h>
int main()
{
	int i=1,fact=1,n;
	printf("enetr n value");
	scanf("%d",&n);
	while(i<=n)
		{
		fact=fact*i;
		i++;
		}
		printf("factorial is %d",fact);
}
