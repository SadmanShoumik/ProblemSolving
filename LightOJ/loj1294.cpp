#include<cstdio>
#include<bits/stdc++.h>

int main()
{
    long long int m,n,t,ans,i,j,k;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&n,&m);
        ans=m*(n/2);
        printf("Case %lld: %lld\n",i,ans);
    }
    return 0;
}
