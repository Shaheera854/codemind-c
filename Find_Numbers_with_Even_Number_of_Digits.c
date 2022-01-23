#include<stdio.h>
int main()
{
    int n,arr[1000],m,i,r,c,co=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        m=arr[i];
        c=0;
        while(m>0)
        {
            r=m%10;
            m/=10;
            c++;
        }
        if(c%2==0)
        {
            co++;
        }
    }
    printf("%d",co);
}