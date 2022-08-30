#include<stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        max=0;
        for(int j=i+1;j<n && i!=n;j++)
        {
            if(max<arr[j])
            {
                max=arr[j];
            }
        }
        arr[i]=max;
    }
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            printf("-1");
        }
        else
        {
            printf("%d ",arr[i]);
        }
    }
}