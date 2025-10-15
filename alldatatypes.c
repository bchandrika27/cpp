//Program for all datatypes
#include<stdio.h>
main()
{
	int c;
	float d;
	char ch;
	char str[100];
	printf("enter a number");
	scanf("%d",&c);
	printf("enter floating value");
	scanf("%f\n",&d);
	printf("enter character\n");
	scanf("%c",&ch);
	printf("enter string");
	scanf("%s",&str);
	printf("%d\n%f\n%c\n%s",c,d,ch,str);
}
