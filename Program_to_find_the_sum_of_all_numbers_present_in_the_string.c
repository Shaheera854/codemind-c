#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i,s=0,n;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            n=str[i]-48;
            s+=n;
        }
    }
    printf("%d",s);
}