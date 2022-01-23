#include<stdio.h>
int main()
{
    int n,arr[100],i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=arr[i];j++)
        {
            if(arr[i]==j*j)
            {
                s+=arr[i];
            }
        }
    }
    printf("%d",s);
}