#include<stdio.h>
int x=0,a[100];
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i+=2)
    {
        while(arr[i])
        {
            a[x]=arr[i+1];
            x++;
            arr[i]--;
        }
    }
    for(int i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
}