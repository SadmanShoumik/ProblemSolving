#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,i,j,k,a,b,c;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&a);
        c=a; b=0;
        while(c>0)
        {
            j=c%10;
            b=b*10+j;
            c/=10;
        }
        if(a==b)
            printf("Case %lld: Yes\n",i);
        else
            printf("Case %lld: No\n",i);
    }
    return 0;
}
