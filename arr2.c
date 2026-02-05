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

   int lar = 0,small= 0;
   int res = 1,res2=1;
   for(k=0;k<r;k++)
   {
    for(l=0;l<c;l++)
    {
        if(arr[k][l] > lar)
        {
            lar = arr[k][l];
        }else if(arr[k][l] < 0)
        {
            small = arr[k][l];
        }
    } res *= small;
    res2 *= lar;
   }
   res > res2 ? printf("%d",res) : printf("%d",res2);
}