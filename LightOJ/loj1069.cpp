#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,ami,lift,time,i,j,k,diff;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&ami,&lift);
        time=3+5+3+3+5;
        diff=ami-lift;
        if(diff<0)
            diff=diff*(-1);
        time=time+(diff*4)+(ami*4);
        printf("Case %lld: %lld\n",i,time);
    }
    return 0;
}
