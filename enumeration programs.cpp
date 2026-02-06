#include<stdio.h>
#include<string.h>
enum month{jan,feb,mar,apr,may,jun,july,aug,sept,oct,nov,dec};
int main()
{
	enum week{mon=1,Tue,wed,Thu,Fri,sat,sun};
	printf("Tue=%d",Tue);
	printf("\nFri=%d",Fri);
	printf("\nsun=%d",sun);
	return 0;
}
