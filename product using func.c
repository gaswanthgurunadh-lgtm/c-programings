#include<stdio.h>
int main()
{
	int x=5,y=10;
	product(x,y);
	return 0;
}
void product(int x,int y)
{
	int z;
	z=x*y;
	printf("product=%d",z);
}
