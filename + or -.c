#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("enter a&b value");
	scanf("%d%d",&a,&b);
	printf("enter your choice +add -sub *mult /div");
	{
	    case  1:c=a+b
	        	printf("sum=%d",c);
		        break;
		case 2:c=a-b
		         printf("sub=%d",c);
	             break;
		case 3:c=a*b
		         printf("mult=%d",c);
		         break;
		case 4:c=a/b
		        printf("div=%d",c);
		        break;      
	}
	return 0;
}
