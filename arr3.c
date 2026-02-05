#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r, &c);

    int arr[r][c];

    int i,j,k,l;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int temp = arr[0][0];
    for(k=0;k<r;k++)
    {
        int count = 1;
        for(l=1;l<c;l++)
        {
            if(temp==arr[k][l])
            {
                break;
            }else
            {
                temp = arr[k][l];
                count++;
            }
        }
        if(count > 3)
        {
            printf("%d",k);
            break;
        }
    }
    
}