#include<stdio.h>

long long int gcd(long long int a,long long int b)
{
    long long int x,y;
    x=a;
    y=b;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

int main()
{
    long long int t,i,a,b,c,lcm,gcd;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        double z;
        scanf("%lld %lld",&a,&c);
        z=c/(a*1.00);
        b=c/a;
        lcm=gcdlcm(a,b);

        if(b==z && lcm==c)
        {
            printf("%lld\n",b);
        }
        else if(b==z && lcm!=c)
        {
            printf("%lld\n",c);
        }
        else
            printf("NO SOLUTION\n");
    }
    return 0;
}
