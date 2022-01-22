#include<stdio.h>
int main()
{
    int i,j,r;
    scanf("%d",&r);
    if(r<3)
    {
        printf("The pattern is not possible");
    }
    else
    {
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(i=r-1;i>0;i--)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("
");
        }
    }
}