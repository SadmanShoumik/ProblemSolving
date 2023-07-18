#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,m,k,res,i,j;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        res=0;
        scanf("%lld",&n);
        long long int a[n],b[n];

        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            scanf("%lld",&b[j]);
        }
        sort(a,a+n);
        sort(b,b+n);
        for(j=0;j<n;j++)
        {
            res=res+(a[j]*b[j]);
        }
        printf("%lld\n",res);
    }
    return 0;
}
