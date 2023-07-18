#include<stdio.h>
long long int check(long long int a)
{
    if(a%2==0)
    {
        a=a/2;
    }
    else
    {
        a=3*a+1;
    }
    return a;
}

int main()
{
    long long int a,b,lim,i=0,term;
    while(scanf("%lld %lld",&a,&lim)!=EOF)
    {
        i++;
        b=a;
        if(a<0 && lim<0){break;}
        term=1;
        while(a<=lim)
        {
            a=check(a);
            if(a>lim){break;}
            term++;
            if(a==1){break;}
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,b,lim,term);
    }
    return 0;
}
