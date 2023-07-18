#include<stdio.h>

long long int a[500100];

void lelz()
{
    long long int j,k,res;
    k=2;
    res=0;
    for(j=1;j<=500000;j++)
    {
        res=(res+k)%j;

        if(res<=0)
        {
            a[j]=j;
        }
        else
        {
            a[j]=res;
        }
    }
}

int main()
{
    lelz();
    long long int i,j,t,n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
        {
            return 0;
        }
        else if(n>0)
        {
            printf("%lld\n",a[n]);
        }
    }
    return 0;
}
