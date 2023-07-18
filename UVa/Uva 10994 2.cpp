#include<iostream>
#include<stdio.h>

using namespace std;

long long int lolz(long long int n)
{
    if(n%10>0)
        return (n%10);
    else if(n==0)
        return 0;
    else
        lolz(n/10);
}

int main()
{
    long long int p,q,sum,i,j,k,l,diff;
    while(scanf("%lld %lld",&p,&q)!=EOF)
    {
        sum=0;
        if(p<0 && q<0)
            return 0;

        while(p%10!=0)
        {
            sum+=p%10;
            p++;
        }
        while(q%10!=0)
        {
            sum+=q%10;
            q--;
        }

        if(p!=q)
        {
            diff=(q-p);
            diff=diff/10;
            sum+=(diff*45);
            for(i=p;i<=q;i=i+10)
            {
                sum+=lolz(i);
            }
        }
        if(p==q)
        {
            sum+=lolz(p);
        }

        printf("%lld\n",sum);
    }
    return 0;
}
