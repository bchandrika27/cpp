#include<stdio.h>
struct student
{
	char name[15];
	int rno;
	char gender;
};
int main()
{
	struct student s1={"Riya",25027,'F'},s2;
	s2=s1;
	printf("The Student Details are:\n");
	printf("Name:%s\nRno=%d\nGender=%c",s2.name,s2.rno,s2.gender);
return 0;
}

