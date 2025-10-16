#include<stdio.h>
struct student
{
int rollno;
char name[10];
float marks;
};
int main()
{
	int i;
	struct student s[5];
	printf("Enter Records of 5 students");
	for(i=1;i<5;i++) {
		printf("\nEnter Rollno:");
		scanf("%d",&s[i].rollno);
		printf("\nEnter name:");
		scanf("%s",s[i].name);
		printf("\nEnter marks:");
		scanf("%f",&s[i].marks);
	}
	printf("Entered Details of 5 students: \n");
	for(i=1;i<5;i++) {
		printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
	}
	return 0;
}
