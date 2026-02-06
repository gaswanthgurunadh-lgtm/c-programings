#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[20];
	float per;
}s1={101,"sreeja",98.00},s2;
void display(struct student);
int main()
{
	struct student s3={103,"gaswanth",89.00};
	printf("enter student2 values");
	scanf("%d%s%f",&s2.rollno,&s2.name,&s2.per);
	display(s1);
	display(s2);
	display(s3);
	return 0;
}
void display(struct student s)
{
	printf("\n%d%s%f",s.rollno,s.name,s.per);
}

