#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int x,i=1;i<=n;i++)
    {
        x=1;
        for(;x<=n;x++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}