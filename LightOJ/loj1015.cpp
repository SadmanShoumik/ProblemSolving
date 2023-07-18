#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,i,j,res;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        res=0;
        long long int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
            if(a[j]>=0)
                res=res+a[j];
        }
        printf("Case %lld: %lld\n",i,res);
    }
    return 0;
}
