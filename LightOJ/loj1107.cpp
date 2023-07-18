#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,cx,cy,i,j,k,xa,xb,xc,xd,ya,yb,yc,yd,a,b,c,d;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld %lld",&xa,&ya,&xc,&yc);
        xb=xc; yb=ya; xd=xa; yd=yc;
        scanf("%lld",&n);
        printf("Case %lld:\n",i);
        for(j=0;j<n;j++)
        {
            scanf("%lld %lld",&cx,&cy);
            if(cx>xa && cx<xb && cy>ya && cy<yd)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
