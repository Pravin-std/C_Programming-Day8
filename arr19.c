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
    int times = 0;
    for(k=0;k<r;k++)
    {
        int val = arr[k][0];
        for(l=1;l<c;l++)
        {
            if(arr[k][l] > val)
            {
                val = arr[k][l];
                times = 1;
            }else
            {
                count = 0;
            }

        }
        if(times == 1)
        {
            count++;
        }
    }
    printf("%d",count);
}