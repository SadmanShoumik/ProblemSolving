#include<stdio.h>

void merge(int a[],int low,int lowmid,int highmid,int high)
{
    int i,j,k,temp[100000];
    i=low; j=highmid; k=0;
    while(i<=lowmid && j<=high)
    {
        if(a[i]<=a[j])
        {
            temp[k++]=a[i++];
        }
        else if(a[j]<a[i])
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=lowmid)
    {
        temp[k++]=a[i++];
    }
    while(j<=high)
    {
        temp[k++]=a[j++];
    }
    for(i=0;i<k;i++)
    {
        a[i]=temp[i];
    }
}

void mergesort(int a[],int i,int j)
{
    int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j);
        merge(a,i,mid,mid+1,j);
    }
}

int main()
{
    int i=1,j,k,n,h,ta,td,t,temp,flag;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d %d %d %d",&n,&h,&ta,&td);
        int hh[n],time=0,tm;
        for(j=0;j<n;j++)
        {
            scanf("%d",&hh[j]);
        }
        mergesort(hh,0,n-1);
        tm=n*ta;
        for(j=0;j<n;j++)
        {
            flag=0;
            if(hh[j]!=1000)
            {
                for(k=n-1;k>j;k--)
                {
                    if(hh[j]+hh[k]<h && flag==0)
                    {
                        time=time+td;
                        hh[k]=1000; hh[j]=1000;
                        flag=1;
                    }
                }
                if(flag==0)
                {
                    time=time+ta;
                    hh[j]=1000;
                }
            }
        }
        if(tm<time){time=tm;}
        printf("Case %d: %d\n",i,time);
        i++;
    }
    return 0;
}
