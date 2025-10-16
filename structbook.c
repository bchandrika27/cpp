#include<stdio.h>
struct book
{
	int pages;
	char *name;
	float price;
};
int main()
{
	struct book b1; 
	b1.pages=250;
	b1.name="C programming";
	b1.price=345.50;
	printf("book-pages : %d\n", b1.pages);
	printf("book-price : %f\n", b1.price);
	printf("book name : %s\n", b1.name);
	return 0;
} 
	
