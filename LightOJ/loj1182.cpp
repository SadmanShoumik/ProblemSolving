#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,i,j,k,l,cnt;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        cnt=0;
        while(n!=0)
        {
            if(n%2==1)
            {
                cnt++;
            }
            n/=2;
        }
        if(cnt%2==0)
        {
            printf("Case %lld: even\n",i);
        }
        else if(cnt%2==1)
        {
            printf("Case %lld: odd\n",i);
        }
    }
    return 0;
}
