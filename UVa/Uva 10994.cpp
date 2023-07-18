#include<iostream>
#include<stdio.h>

long long int hagu(long long int n)
{
    long long int sum,i,j,k,l;
    sum=0;
    while(n!=0)
    {
        sum=sum+(45*(n/10));

        for(i=n/10*10+1;i<=n;i++)
        {
            sum=sum+(i%10);
        }
        n=n/10;
    }
    return sum;
}

int main()
{
    long long int p,q,i,j,k,sum;
    while(scanf("%lld %lld",&p,&q)!=EOF)
    {
        if(p<0 && q<0)
            return 0;

        sum=hagu(q)-hagu(p-1);
        printf("%lld\n",sum);
    }
    return 0;
}
