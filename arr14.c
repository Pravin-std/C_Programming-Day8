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

    int sum1 = 0;
    int max = 0;
    int index = 0;
    for(k=0;k<c;k++)
    {
        for(l=0;l<r;l++)
        {
            sum1 += arr[l][k];
        }
        
        if(sum1 > max)
        {
            max = sum1;
            index++;
        }
       sum1 = 0;
    }
    printf("%d",index-1);
}

 