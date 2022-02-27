#include<stdio.h>
int main()
{
    char str[1000];
    int n,i,j,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[j]>='0' && str[j]<='9')
            {
                t++;
            }
            else
            {
                printf("False
");
                t=0;
                break;
            }
        }
        if(t>0)
        {
            printf("True
");
        }
    }
}