#include <stdio.h>
#include <stdlib.h>
void print_matrix(int mat[3][3]);
int a[3][3],b[3][3],result_AB[3][3];
void print_matrix(int mat[3][3])
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j>0)
            {
                printf(" ");
            }
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j,k,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
                result_AB[i][j]=sum;
            }
        }
    }
    printf("Matrix product:\n");
	print_matrix(result_AB);
    return 0;
}
