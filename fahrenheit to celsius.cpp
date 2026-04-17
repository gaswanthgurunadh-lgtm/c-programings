#include<stdio.h>
int main()
{
	float f,c;
	printf("enter the fahrenheit value");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("celsius=%f",c);
	return 0;
}
