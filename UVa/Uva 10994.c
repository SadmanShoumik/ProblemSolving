#include<stdio.h>

long long int recur(long long int a)
{
    if(a%10>0)
    {
        a=a%10;
    }
    else if(a==0)
    {
        a=0;
    }
    else
    {
        a=a/10;
        a=recur(a);
    }
    return a;
}

int main()
{
    long long int p,q,i,sum;
    while(scanf("%lld %lld",&p,&q)!=EOF)
    {
        if(p<0 && q<0)
            break;
        sum=0;
        for(i=p;i<=q;i++)
        {
            sum=sum+recur(i);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
