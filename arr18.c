#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c];

    int i,j,k,l;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int m,n;
    int diff = 0;
    int max = 0;
    for(k=0;k<r-1;k++)
    {
        for(l=0;l<c;l++)
        {
            for(m=1;m<r;m++)
            {
                for(n=0;n<c;n++)
                {
                    diff = arr[k][l] - arr[m][n];
                    //printf("%d ",diff);
                    if(diff > max)
                    {
                        max = diff;
                    }
                }
            }
        }
    }
    printf("%d",max);
}