#include<stdio.h>
#include<string.h>
struct employee
{
	int empno;
	char name[10];
	long int salary;
}e1={621,"riya",42000},e2;
int main()
{
	struct employee
	e3={691,"bobby",62000},e4;
	e2.empno=694;
    strcpy(e2.name,"ram" );
	e2.salary=72000;
	printf("enter e4 empno");
	scanf("%d",&e4.empno);
	printf("enter e4 name");
	scanf("%s",&e4.name);
	printf("enter e4 salary");
	scanf("%f",&e4.salary);
	printf("%d%s%f",e1.empno,e1.name,e1.salary);
	printf("\n%d%s%f",e2.empno,e2.name,e2.salary);
	printf("\n%d%s%f",e3.empno,e3.name,e3.salary);
	printf("\n%d%s%f",e4.empno,e4.name,e4.salary);
	return 0;
}

