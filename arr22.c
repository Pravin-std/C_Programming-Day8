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

    int max = arr[0][0];
    int count = 0;
    int times = 0;

    for(k=0;k<r;k++)
    {
        for(l=1;l<c;l++)
        {
            if(arr[k][l] > max)
            {
                max = arr[k][l];
                times = 1;
            }else
            {
                times = 0;
                break;
            }
        }
        if(times > 0){
        count++;
        }

    }
    printf("%d",count);
}

    
