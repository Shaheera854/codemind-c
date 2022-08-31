#include<stdio.h>
int main()
{
    char str[10000];
    int b=0,a=0,l=0,o=0,n=0;
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='b')
        {
            b++;
        }
        else if(str[i]=='a')
        {
            a++;
        }
        else if(str[i]=='l')
        {
            l++;
        }
        else if(str[i]=='o')
        {
            o++;
        }
         else if(str[i]=='n')
        {
            n++;
        }
    }
    int balloon=0;
    while(b>0 && a>0 && l>0 && o>0 && n>0)
    {
        b--;
        a--;
        n--;
        l-=2;
        if(l<0)
        {
            break;
        }
        o-=2;
        if(o<0)
        {
            break;
        }
        balloon++;
    }
    printf("%d",balloon);
}