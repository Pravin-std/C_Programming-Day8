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

    int max = 0;
    for(k=0;k<r;k++)
    {
        int product = 1;
        for(l=0;l<c;l++)
        {
            product *=arr[k][l];
        }if(product > 0){
        printf("%d",k);
        }
    }
}