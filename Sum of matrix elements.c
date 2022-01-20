#include<stdio.h>
int main()
{
    int n,m,i,j,r[100],s=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        scanf("%d",&r[j]);
        s+=r[j];
        }
    }
    printf("%d",s);
}