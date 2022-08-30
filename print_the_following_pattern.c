#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j,i=1;i<=n;i++)
    {
        j=1;for(;j<=n;j++)
        {
            if(i==j || i+j==n+1)
            {
                printf("x");
            }
            else
            {
                printf("0");
            }
        }
        printf("
");
    }
}