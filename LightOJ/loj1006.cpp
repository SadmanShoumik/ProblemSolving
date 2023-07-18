#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,t,i,l,a[50000];
    scanf("%lld",&t);
    for(l=1;l<=t;l++)
    {
        scanf("%lld%lld%lld%lld%lld%lld%lld",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&n);
        for(int i=6;i<=n;i++)
          a[i]=(a[i-1]+a[i-2]+a[i-3]+a[i-4]+a[i-5]+a[i-6])%10000007;

        printf("Case %lld: %lld\n",l,a[n]%10000007);
    }
    return 0;
}

