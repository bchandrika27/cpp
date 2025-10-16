#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,sum=0;
	printf("Enter number of elements:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Memory is not allocated");
		exit(0);
	}
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		sum+=*(p+i);
	}
	printf("sum=%d",sum);
	return 0;
	}

