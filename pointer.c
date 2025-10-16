#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
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
	scanf("%d",p+i);
	printf("Array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("Address=%d,Element=%d\n",p+i,*(p+i));
	}
	return 0;
	}

