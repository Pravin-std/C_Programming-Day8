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

    int lar = arr[0][0];
    int seclar = 0;

    for(k=0;k<r;k++)
    {
        for(l=0;l<c;l++)
        {
            if(arr[k][l] > lar)
            {
                seclar = lar;
                lar = arr[k][l];
            }else if(arr[k][l] < lar && arr[k][l] > seclar)
            {
                seclar = arr[k][l];
            }
        }
    }
    printf("Highest salary = %d\n",lar);
    printf("Second Highest distinct salary = %d",seclar);
}