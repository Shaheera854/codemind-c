#include<stdio.h>
int main()
{
    int m,n,r,s=0;
    scanf("%d",&n);//18
    m=n;
    while(m>0)
    {
        r=m%10;//r=1
        m=m/10;//n=0
        s+=r;//s=9
    }
    if(n%s==0)
    {
        printf("True");
    }
    else if(n%s!=0)
    {
        printf("False");
    }
}