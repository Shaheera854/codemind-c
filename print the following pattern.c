#include<stdio.h>
int main()
{
    int n,i,j,arr[100];
    {
        scanf("%d",&n);
    }
    for(i=0;i<n;i++)
    {
        for(j=n;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}