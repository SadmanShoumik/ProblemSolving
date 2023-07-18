#include<stdio.h>

void merge(long int a[],long int low,long int lowmid,long int highmid,long int high)
{
    long int i,j,k,temp[100000];
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
    k=0;
    for(i=low;i<=high;i++)
    {
        a[i]=temp[k++];
    }
}

void mergesort(long int a[],long int i,long int j)
{
    long int mid;
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
    long int i,j,k,n,h,ta,td,t,time,tm;
    t=0;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %ld %ld %ld",&n,&h,&ta,&td);
        long int hh[n];
        for(j=0;j<n;j++)
        {
            scanf("%ld",&hh[j]);
        }
        tm=n*ta;
        mergesort(hh,0,n-1);
        time=0;



        k=0; j=n-1;

        while(k<=j)
        {
            if(hh[k]+hh[j]<h && k!=j)
            {

                time+=td;
                k++; j--;
            }
            if(hh[k]+hh[j]>=h && k!=j)
            {

                time+=ta;
                j--;
            }
            if(k==j)
            {
                time=time+ta;
                k++;
            }
        }
        if(tm<time)
            time=tm;
        printf("Case %ld: %ld\n",i,time);
    }
    return 0;
}
