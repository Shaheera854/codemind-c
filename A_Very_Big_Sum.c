#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int a[n],s=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        s+=a[i];
    }
    printf("%lld",s);
}