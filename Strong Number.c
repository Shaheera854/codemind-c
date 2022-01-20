#include<stdio.h>
int main()
{
    int r,n,m,i,s=0,f=1;
    scanf("%d",&n);//145
    m=n;//m=145
    while(m>0)
    {
        r=m%10;//r=1
        m=m/10;//m=0
        f=1;
        for(r;r>=1;r--)//r=1>=1
        {
            f*=r;//f=1
        }
        s+=f;//s=120+24=144+1=145
    }
    if(n==s)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}