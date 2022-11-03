#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t[100],s_1[100]="",t_1[100]="";
    scanf("%s",s);
    scanf("%s",t);
    int len_s=strlen(s);
    int len_t=strlen(t);
    char t1,t2;
    for(int i=len_s-1;i>=0;i--)//ab#c
    {
        if(s[i]=='#')
        {
            t1=s[i];//t1=#
            s[i]=s[len_s-1];//c
            s[len_s-1]=t1;//abc#
            int k=1;
            while((i-k)>=0)//
            {
                if(s[i-k]!='#')
                {
                    t2=s[i-k];
                    s[i-k]=s[len_s-2];
                    s[len_s-2]=t2;
                    len_s-=2;
                    break;
                }
                k++;
            }
        }
    }
    for(int i=0;i<len_s;i++)
    {
    	strncat(s_1,&s[i],1);
	}
	for(int i=len_t-1;i>=0;i--)
    {
        if(t[i]=='#')
        {
            t1=t[i];
            t[i]=t[len_t-1];
            t[len_t-1]=t1;
            int k=1;
            while((i-k)>=0)
            {
                if(t[i-k]!='#')
                {
                    t2=t[i-k];
                    t[i-k]=t[len_t-2];
                    t[len_t-2]=t2;
                    len_t-=2;
                    break;
                }
                k++;
            }
        }
    }
    for(int i=0;i<len_t;i++)
    {
    	strncat(t_1,&t[i],1);
	}
	int val=strcmp(s_1,t_1);
	if(val==0)
	printf("True");
	else
	printf("False");
}