#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,a,b,c,d,i,j,k,l,s,r;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        k=a+b; l=c+d; s=1, r=2;
        if((k%2==0 && l%2==1) || (k%2==1 && l%2==0))
            printf("Case %lld: impossible\n",i);
        else
        {
            if(abs(a-c)==abs(b-d))
                printf("Case %lld: %lld\n",i,s);
            else if(abs(a-c)!=abs(b-d))
                printf("Case %lld: %lld\n",i,r);
        }
    }
    return 0;
}
