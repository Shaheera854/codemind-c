#include<stdio.h>
int main()
{
    int n,c=0,d=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]==arr[i-1]+arr[i-2])
        {
            c++;
        }
        else
        {
            d=1;
            break;
        }
    }
    if(d==0 && c>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}