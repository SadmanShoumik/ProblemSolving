#include<stdio.h>

int main()
{
    long long int i,j,k,t,n,res;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
        {
            return 0;
        }
        k=2;
        res=0;
        for(j=1;j<=n;j++)
        {
            res=(res+k)%j;
            if(j==n)
            {
                res=res+1;
            }
        }
        res=res-1;
        if(res<=0)
        {
            res=n;
        }

        printf("%lld\n",res);
    }
    return 0;
}
