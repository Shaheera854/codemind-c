#include<stdio.h>
int main()
{
    int n,i,arr[1001],p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        p=1;
        for(int j=0;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                p*=arr[j];
            }
        }
        printf("%d ",p);
    }
}