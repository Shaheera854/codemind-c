#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,t=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            if(i%2!=0)
            {
                t++;
            }
            else
            {
                printf("False");
                t=0;
                break;
            }
        }
    }
    if(t>0)
    {
        printf("True");
    }
}