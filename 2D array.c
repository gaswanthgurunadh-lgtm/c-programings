#include<stdio.h>
int main()
{
	int a [10] [10],r,c,j,i;

    printf("enter row & Column sizes");

    scanf("%d %d", &r, &c);

    printf("enter 2D array values");

    for (i=0; i<r; i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][5]);
        }
    }

    printf("In Display 2D array Valves");

    for (i=0;i<r;i++)
    {
	
        for (j=0;j<c;j++)
        {

            printf("%d", a[i][j]);
        }

        printf("\n");
    }
	return 0;   
}

