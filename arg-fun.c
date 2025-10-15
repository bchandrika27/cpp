#include<stdio.h>
struct student
{
	int no;
	int marks;
}s;
void display(int x,int y)
{
	printf("%d %d",x,y);
}
int main()
{
	s.no=10;
	s.marks=20;
	display(s.no,s.marks);
	return 0;
}

