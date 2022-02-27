#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i,s,e;
    scanf("%d%d",&s,&e);
    for(i=s;i<=e;i++)
    {
        printf("%c",str[i]);
    }
}