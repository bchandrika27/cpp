#include<stdio.h>
int main()
{
 int a[3][3],t[3][3],i,j,r,c;
 printf("Enter rows and columns");
 scanf("%d%d",&r,&c);
 printf("Enter elements into A matrix");
 for(i=0;i<r;i++)
 {  for(j=0;j<c;j++)
  {   scanf("%d",&a[i][j]);
  } 
 }
for(i=0;i<r;i++)
 {  for(j=0;j<c;j++)
 {
 	t[j][i]=a[i][j];
 }
 }
printf("transpose matrix is \n");
for(i=0;i<c;i++)
 {  for(j=0;j<r;j++)
 {
 	printf("%d\t",t[i][j]);
 }
 printf("\n");
}
}

