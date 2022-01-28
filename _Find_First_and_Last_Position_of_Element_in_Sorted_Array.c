#include<stdio.h>
int main()
{
    int m,n,i,arr[1001],starting,ending;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            starting=i;
            break;
        }
    }
    if(arr[i]!=m)
    {
        printf("-1 ");
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            ending=i;
        }
    }
    if(arr[ending]==m)
    {
        printf("%d %d",starting,ending);
    }
    else if(arr[i]!=m)
    {
        printf("-1");
    }
}