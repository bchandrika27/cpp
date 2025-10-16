#include<stdio.h>
struct student
{
	int rollno;
	char *name;
	struct DOB
	{
		int dd;
		int mm;
		int yyyy;
	} d;
}s1;
int main()
{
	s1.rollno=15;
	s1.name="chandrika";
	s1.d.dd=27;
	s1.d.mm=10;
	s1.d.yyyy=2025;
	printf("rollno= %d\n", s1.rollno);
	printf("name is %s", s1.name);
	printf("\nDOB IS %d-%d-%d",s1.d.dd,s1.d.mm,s1.d.yyyy);
	return 0;
}
