#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i,max=0,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            c++;
            if(max<c)
            {
                max=c;
            }
        }
        else
        {
            c=0;
        }
    }
    printf("%d",max);
}