#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x=0;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(str[i]==str[j])
                {
                    c++;
                }
            }
            if(c==1)
            {
                printf("%c
",str[i]);
                x=1;
                break;
            }
        }
        if(x==0)
        {
            printf("-1
");
        }
    }
}