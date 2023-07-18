#include<stdio.h>
int main()
{
    long long int n,i,j,k,l,col[3];
    while(scanf("%lld",&n)!=EOF)
    {
        for(i=0;i<3;i++)
        {
            col[i]=0;
        }
        long long int mod;
        long long int len[n+1],wid[n+1];
        for(i=1;i<n+1;i++)
        {
            scanf("%lld",&len[i]);
        }
        for(i=1;i<n+1;i++)
        {
            scanf("%lld",&wid[i]);
        }
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<n+1;j++)
            {
                mod=(i+j)%3;
                col[mod]=col[mod]+(len[i]*wid[j]);
            }
        }
        printf("%lld %lld %lld\n",col[0],col[1],col[2]);
    }
    return 0;
}
