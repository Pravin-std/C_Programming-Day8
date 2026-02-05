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

    int max = 0, min = 0;
    int count = 1;
    for(k=0;k<r;k++)
    {
        int sum = 0;
        for(l=0;l<c;l++)
        {
            sum += arr[k][l];

        }
        //printf("%d ",sum);
        if(sum > min)
        {
            max = sum;
        }else
        {
            min = sum;
        }
    }
    if(min < max)
    {
        printf("%d",k-1);
    }else
    {
        printf("%d",k-1);
    }
}