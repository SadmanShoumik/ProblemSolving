#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
    long long int temp;
    if(a>b) {temp=a; a=b; b=temp;}
    while(a!=b)
    {
        b=b-a;
        if(b<a) {temp=a; a=b; b=temp;}
    }
    return b;
}

int main()
{
    long long int i,j,divi,n,nume,denomi,t;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        denomi=0;
        scanf("%lld",&n);
        long long int in[n],lcm=1;
        for(j=0;j<n;j++)
        {
            scanf("%lld",&in[j]);
            lcm=lcm*in[j];
        }
        nume=lcm*n;
        for(j=0;j<n;j++)
        {
            in[j]=lcm/in[j];
            denomi=denomi+in[j];
        }
        divi=gcd(nume,denomi);
        if(divi>1)
        {
            nume=nume/divi; denomi=denomi/divi;
        }
        printf("Case %lld: %lld/%lld\n",i,nume,denomi);
    }
    return 0;
}
