#include<stdio.h>
int main()
{
    int n,s=0,p=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                p+=a[i][j];
            }
            if(i+j==n-1)
            {
                s+=a[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
Secondary Diagonal:%d",p,s);
}