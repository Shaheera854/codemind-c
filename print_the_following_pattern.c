#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j,i=1;i<=n;i++)
    {
        j=1;for(;j<=n;j++)
        {
            if(i==j)
            {
                printf("0");
            }
            else
            {
                printf("x");
            }
        }
        printf("
");
    }
}