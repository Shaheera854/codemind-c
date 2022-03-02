#include<stdio.h>
int main()
{
    int n,i,j;
    float res=0,sum=0,count=0;
    scanf("%d",&n);
    float arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);//1 2 3 4 5 6 2
    }
    for(i=0;i<n;i++)//i=0<7
    {
        int t=0,x=arr[i];//x=1
        for(j=0;j<n;j++)//j=0<7
        {
            if(arr[i]==arr[j])//1==1
            {
                t++;//t=1
            }
        }
        if(t==x)//1==1
        {
            sum+=arr[i];//sum=1
            count++;//count=1
            arr[i]=0;
        }
    }
    if(count==0)
    {
        printf("%d",-1);
    }
    else
    {
        res=sum/count;
        printf("%.2f",res);
    }
}