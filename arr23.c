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

    int sum = 0;
    for(k=0;k<r;k++)
    {
        for(l=0;l<c;l++)
        {
            if(k%2 !=0 && l % 2!=0)
            {
                continue;
            }else{
            sum +=arr[k][l];
            }
        }
    }
    printf("%d",sum);
}