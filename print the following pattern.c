#include<stdio.h>
int main()
{
    int n,r,i,j;
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
        for(j=1;j<=n;j++)
        {
        printf("%d",j);
        }
        n--;
        printf("
");
    }
}