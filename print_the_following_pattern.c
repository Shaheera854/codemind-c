#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j,i=n;i>=1;i--)
    {
        j=1;
        for(;j<=i;j++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}