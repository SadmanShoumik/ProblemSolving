#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int cnt,t,i,a,b,j,k,l,sum,n,diff,p,q;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        cnt=0;
        scanf("%lld %lld",&a,&b);
        p=a; q=b;
        while( (a%3==0)||((a+1)%3==0) && a<=b )
        {
            cnt++; a++;
        }
        while( (b%3==0)||((b+1)%3==0) )
        {
            cnt++; b--;
        }

        diff=b-a+1;
        if(diff<0)
            diff=0;
        diff=(diff/3)*2;
        cnt=cnt+diff;
        if(p==q)
        {
            if( p%3==0 )
                cnt=cnt-2;
            if( (p+1)%3==0 )
                cnt=cnt-2;
        }
        printf("Case %lld: %lld\n",i+1,cnt);

    }
    return 0;
}
