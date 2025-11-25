#include<stdio.h>
int main ()
{
    int  A[10][10],r,c,i,j;
	printf("Enter A matrix rows & Columns Sizes");
	scanf("%d%d",&r,&c);
	printf("Enter A matrix values");
	for (i=0; i<r; i++)
	{
		for(j = 0; j < c ; j++)	
		{
            scanf("%d",&A[i][j]);
        }
    }
    printf("Transpose matrix is \n");
	for (i=0;i<r;i++)
	{
	    for (j=0; j<c;j++)
	    {
		    printf("%d", A[i][j]);
		}

        printf("\n");
    }
	return 0;
}
