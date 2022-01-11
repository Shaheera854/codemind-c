#include<stdio.h>
int main()
{
    int x,y,c=0;
    scanf("%d",&y);
    for(x=1;x<=y;x++)//y=5
    {
        if(y%x==0) //5%1==0 5%5==0
        {
            c++;    //c==2
        }
    }
    if(c==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}