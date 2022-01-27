#include<stdio.h>
int main()
{
    int n,i,arr[1001],m,a[1001],j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=n-1;//m=5
    for(i=0;i<n/2;i++)//i=0<5
    {
        a[i]=arr[m];//a[0]=
        m--;
        printf("%d ",a[i]);
    }
    m=0;
    for(i=n/2,j=0;i<n;i++,j++)
    {
        a[i]=arr[j];
        m++;
        printf("%d ",a[i]);
    }
}