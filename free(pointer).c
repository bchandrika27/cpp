#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,m;
	printf("Enter number of elements:");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("Memory is not allocated");
		exit(0);
	}
	printf("Enter elements:");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	for(i=0;i<n;i++)
	printf("\nAddress=%d,element=%d\n",p+i,*(p+i));
	free(p);
	printf("Array Elements are\n");
	for(i=0;i<n;i++)
	printf("\nAddress=%d,element=%d\n",p+i,*(p+i));
	return 0;
	}

