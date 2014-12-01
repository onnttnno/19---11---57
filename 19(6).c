#include <stdio.h>
#include <stdlib.h>
void print_matrix(int mat[3][3]);
int a[3][3],b[9];

int main()
{
    int i,j,k,c,d,e,sum,temp=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            a[i][j]=rand();
            printf("%d\n",a[i][j]);
        }
    }
        for(j=0;j<3;j++)
        {
            for(c=j-1;c<3;c++)
            {
           for(k=0;k<3;k++)
           {
               for(d=k-1;d<2;d++)
               {
               if(a[c][d]>a[c][d+1])
               {
                   temp=a[c][d];
                   a[c][d]=a[c][d+1];
                  a[c][d+1]=temp;
               }
               }
               //printf("temp=%d\n",temp);

           }

        }
        }
        printf("min to max:");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",a[i][j]);
            }
        }

    /*for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }*/

    return 0;
}
