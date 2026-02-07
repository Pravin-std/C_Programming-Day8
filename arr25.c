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

    int count = 0;
    
    for(k=0;k<r;k++)
    {
        int max = arr[k][0];
        int min = arr[k][0];

        for(l=1;l<c;l++)
        {
            if(arr[k][l] > max)
            {
                max = arr[k][l];
            }
            if(arr[k][l] < min)
            {
                min = arr[k][l];
            }
        }
        if(max - min <= 1000)
        {
            count++;
        }
    }
    printf("%d",count);
}