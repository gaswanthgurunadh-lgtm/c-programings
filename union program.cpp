#include<stdio.h>
union student
{
	int rollno;
	char name[50];
	float per;
};
int main()
{
	union student s={101,"gurunadh",99.00};
	printf("%d%s%f",s.rollno,s.name,s.per);
	return 0;
}
