#include<stdio.h>
int main()
{
    char s1[1000],s2[1000];
    long long int i,x=0,y=0;
    scanf("%s%s",s1,s2);
    for(i=0;s1[i]!=NULL;i++)
    {
        s1[i]-=48;
        x=x*10+s1[i];
    }
    for(i=0;s2[i]!=NULL;i++)
    {
        s2[i]-=48;
        y=y*10+s2[i];
    }
    printf("%lld",x*y);
}