#include<stdio.h>
int main()
{
    int n,a,b,i,c=0;
    scanf("%d",&n);//2
    for(i=0;i<n;i++)//i=1<2
    {
        scanf("%d%d",&a,&b);
    	c=0;
    	while(a<=b)
    	{
    		if(a%10==2 || a%10==3 || a%10==9)
    	    {
    			c++;
			}
			a++;
		}
		printf("%d
",c);
	}
}