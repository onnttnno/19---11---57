#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,j,k,max=0;
    for(i=0;i<5;i++)
    {
        a[i]=rand()%6;
        printf("a[%d]=%d\n",i,a[i]);
    }
    for(j=0;j<5;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
        }
    }
    for(k=0;k<5;k++)
    {
      if(a[k]==max)
      {
          printf("position: %d \n",k);
      }
    }
    printf("max=%d",max);
    return 0;
}
