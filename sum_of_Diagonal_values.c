#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int i,j,a[m][n],sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
            if(i+j==m-1 and i!=j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("%d ",sum);
}