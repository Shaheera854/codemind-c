#include<stdio.h>
int main()
{
    int n,i,arr[100],max,t,ind,smax,tmax;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//3 3 2 1
    }
    max=arr[0];//max=3
    ind=0;//imax=0
    for(i=1;i<n;i++)//i=3<4
    {
         if(max<arr[i])//3<1
         {
             max=arr[i];//
             ind=i;//
         }
    }
    t=arr[n-1];//t=1
    arr[n-1]=arr[ind];//arr[4]=3
    arr[ind]=t;//arr[0]=1           1 3 2 3                              
    smax=arr[0];//smax=1
    n=n-1;//n=3                      1 3 2
    ind=0;//imax=0
    for(i=1;i<n;i++)//i=2<3
    {
        if(smax<arr[i] && arr[i]!=max)//1<2   &&    2!=3
        {
            smax=arr[i];//smax=2
            ind=i;//imax=2
        }
    }
    t=arr[n-1];//t=2
    arr[n-1]=arr[ind];//
    arr[ind]=t;//4
    tmax=arr[0];//max=1
    n=n-1;//n=3
    for(i=1;i<n;i++)//i=2<3
    {
        if(tmax<arr[i] && arr[i]!=smax && arr[i]!=max)//2<3
        {
        	tmax=arr[i];//max=
        }
    }
    if(tmax!=smax && tmax!=max)
    {
        printf("%d",tmax);
    }
    else
    {
    	printf("%d",max);
	}
}