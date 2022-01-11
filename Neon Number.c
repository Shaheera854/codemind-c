#include<stdio.h>
int main()
{
    int n,r,sq,sum=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        r=sq%10;
        sq/=10;
        sum+=r;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}