#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,i,j,k,temp;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        j=1;
        scanf("%lld",&n);
        temp=n;
        if(n%2==1)
        {
            printf("Case %lld: Impossible\n",i);
        }
        else if(n%2==0)
        {
            while(n%2==0)
            {
                j*=2;
                n=n/2;
            }
            if(j+n>temp)
            {
                printf("Case %lld: Impossible\n",i);
            }
            else
            {
                printf("Case %lld: %lld %lld\n",i,n,j);
            }
        }
    }
    return 0;
}
