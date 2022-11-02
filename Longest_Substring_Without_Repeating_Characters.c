#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],max_s[100],s2[100]="";
    scanf("%s",str);
    int max=0;
    for(int i=0;i<strlen(str)-2;i++)
    {
    	char s1[100]="";
        //strcpy(s1,s2);
        strncat(s1,&str[i],1);
        for(int j=i+1;j<strlen(str);j++)
        {
            int t=0;
            for(int k=j-1;k>=0;k--)
            {
                if(str[j]==str[k] || str[j]==str[k]+32 || str[j]==str[k]-32)
                {
                    t=1;
                    break;
                }
            }
            if(t==0)
            strncat(s1,&str[j],1);
            else
            break;
        }
        if(max<strlen(s1))
        {
            max=strlen(s1);
            strcpy(max_s,s1);
        }
    }
    if(max<3)
    printf("-1");
    else
    printf("%s",max_s);
}