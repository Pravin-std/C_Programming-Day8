#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    int i,j,k,l;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int temp =0;
    int count = r+1;
    for(k=0;k<r;k++)
    {
        int min = arr[k][0];
        for(l=0;l<c;l++)
        {
            if(arr[k][l] < min)
            {
                min = arr[k][l];
            }
        }
        if(min > temp)
        {
            temp = min;
            count--;
        }
    }
    printf("%d ",count);
}