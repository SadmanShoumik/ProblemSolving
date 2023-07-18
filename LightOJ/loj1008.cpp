#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,intn,i,j,k,a,b,range,diff;
    double fltn;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        fltn=sqrt(n); intn=fltn;
        if(fltn==intn)
        {
            if(intn%2==1)
            {
                a=1; b=intn;
            }
            if(intn%2==0)
            {
                b=1; a=intn;
            }
        }
        else if(fltn!=intn)
        {
            j=intn*intn;
            if(j%2==1)
            {
                a=1; b=intn; range=b+1;
                b++;
                diff=n-j;
                if(diff>range)
                {
                    a=range; b=(range*range)-n+1;;
                }
                else if(diff==range)
                {
                    b=range; a=range;
                }
                else if(diff<range)
                {
                    b=range; a=n-j;
                }
            }
            else if(j%2==0)
            {
                a=intn; b=1; range=a+1;
                a++;
                diff=n-j;
                if(diff>range)
                {
                    b=range; a=(range*range)-n+1;;
                }
                else if(diff==range)
                {
                    b=range; a=range;
                }
                else if(diff<range)
                {
                    a=range; b=n-j;
                }
            }
        }
        printf("Case %lld: %lld %lld\n",i,a,b);
    }
    return 0;
}
