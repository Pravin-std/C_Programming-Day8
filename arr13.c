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
        int temp = arr[k][0];
        for(l=0;l<c;l++)
        {
            if(temp==arr[k][c-1])
            {
                count++;
               break;
            }
        }
    }
    printf("%d",count);
}