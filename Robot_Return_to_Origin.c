#include<stdio.h>
int main()
{
    int x=0,y=0;
    char str[100];
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='U')
        y++;
        else if(str[i]=='D')
        y--;
        else if(str[i]=='L')
        x--;
        else if(str[i]=='R')
        x++;
    }
    if(x==0 && y==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}