#include<stdio.h>
int main()
{
    long long int i,j,k,t,n,res;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&n,&k);
        res=0;
        for(j=1;j<=n;j++)
        {
            res=(res+k)%j;
            if(j==n)
            {
                res=res+1;
            }
        }
        printf("Case %lld: %lld\n",i,res);
    }
    return 0;
}
