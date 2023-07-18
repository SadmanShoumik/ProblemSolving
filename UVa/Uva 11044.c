#include<stdio.h>

int main()
{
    long long int t,m,n,i,j,k,x;
    scanf("%lld",&t);
    for(k=0;k<t;k++)
    {
        scanf("%lld %lld",&m,&n);
        long long int side,area;
        i=m/3;
        j=n/3;
        x=i*j;
        printf("%lld\n",x);
    }
    return 0;
}
