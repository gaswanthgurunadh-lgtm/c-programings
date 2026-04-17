#include<stdio.h>
typedef struct
{
	int roll;
	char name[5];
	float marks;
}student;
int main()
{
	student s1;
	printf("enter roll number");
	scanf("%d",&s1.roll);
	printf("enter name");
	scanf("%s",&s1.name);
	printf("enter marks");
	scanf("%f",&s1.marks);
	printf("%d",s1.roll);
	printf("\n%s",s1.name);
	printf("\n%f",s1.marks);
}
