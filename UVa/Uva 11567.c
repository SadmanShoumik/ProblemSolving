#include<stdio.h>
#include<math.h>

long long int heck(long long int s)
{
    long long int one,two,a,b;
    one=0; two=0;
    while(s>0)
    {
        if(s%2==0)
        {
            s=s/2; one++; two++;
        }
        if(s%2!=0)
        {
            a=s+1; b=s-1;
            one=one+heck(a);
            two=two+heck(b);
        }
        if(one>two)
            s=s-1;
        else
            s=s+1;
    }
    if(one>two)
        one=two;
    return one;
}

int main()
{
    long long int steps,s;
    while(scanf("%lld",&s)!=EOF)
    {
        steps=heck(s);
        printf("%lld\n\n",steps);
    }
    return 0;
}
