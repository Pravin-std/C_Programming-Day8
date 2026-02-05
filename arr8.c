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
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            sum1 +=arr[k][l];
        }
    }
    int sum2 = 0;
    for(k=0;k<2;k++)
    {
        for(l=1;l<3;l++)
        {
            sum2 +=arr[k][l];
        }
    }
    
    int sum3 = 0;

    for(k=1;k<3;k++)
    {
        for(l=0;l<2;l++)
        {
            sum3 +=arr[k][l];
        }
    }

    int sum4 = 0;

    for(k=1;k<3;k++)
    {
        for(l=1;l<3;l++)
        {
            sum4 +=arr[k][l];
        }
    }

    if(sum1 > sum2 && sum1 > sum3 && sum1 > sum4)
    {
        printf("%d",sum1);
    }else if(sum2 > sum1 && sum2 > sum3 && sum2 > sum4)
    {
        printf("%d",sum2);
    }else if(sum3 > sum1 && sum3 > sum2 && sum3 > sum4)
    {
        printf("%d",sum3);
    }else
    {
        printf("%d",sum4);
    }
}