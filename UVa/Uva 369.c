#include<stdio.h>
int main()
{
    long long int m,n,i,dif,m2;
    double c,d;
    while(scanf("%lld %lld",&n,&m)!=EOF)
    {
        if(m==0 && n==0)
            break;
        c=1;
        d=1;
        dif=n-m;
        m2=m;
        if(dif>=m)
        {
            for(i=n;i>dif;i--)
            {
                c=c*i;
                c=c/m;
                if(m>1)
                    m=m-1;
            }
        }
        else if(m>=dif)
        {
            for(i=n;i>m;i--)
            {
                c=c*i;
                c=c/dif;
                if(dif>1)
                    dif=dif-1;
            }
        }
        printf("%lld things taken %lld at a time is %0.0lf exactly.\n",n,m2,c);
    }
    return 0;
}
