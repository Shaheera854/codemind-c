#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int i,j,a[m][n],sum;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<m;i++)
        {
            sum+=a[i][j];
        }
        printf("%d ",sum);
    }
}