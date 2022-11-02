#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%s",str);
	int i=0,t1=0,j;
	while(i<strlen(str))
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			t1=0;
			printf("V");
		}
		else
		{
			t1=1;
			printf("C");
		}
		for(j=i+1;j<strlen(str);j++)//whereabouts
		{
			if(t1==0 && str[j]!='a'&&str[j]!='e'&&str[j]!='i'&&str[j]!='o'&&str[j]!='u')
			{
				i=j;
				break;
			}
			else if(t1==1 && (str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'))
			{
				i=j;
				break;
			}
		}
		i=j;
	}
}