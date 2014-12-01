#include <stdio.h>
#include <stdlib.h>
void print_matrix(int mat[2][2]);
int a[2][2],b[2][2];
void print_matrix(int mat[2][2])
{
    int i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
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
    int i,j,k,sum1=0,average1,average2;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
 for(i=0;i<2;i++)
    {
    average1=0;
    average2=0;
        for(j=0;j<2;j++){
       sum1=sum1+a[i][j];
       sum2=sum2+a[j][i];
        }
    average1=sum1/2;
    average2=sum2/2;
    prinf("average1=%d\taverage2=%d",average1,average2);
    }
    /*for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }*/

    return 0;
}
