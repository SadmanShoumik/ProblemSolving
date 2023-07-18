#include<stdio.h>
#include<math.h>

long int pri(long int n)
{
    long int i;
    if(n==2){return 1;}
    if(n%2==0 || n==1){return 0;}
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){return 0;}
    }
    return 1;
}

long int main()
{
    long int n,v,m,r,flg;
    while(scanf("%ld",&n)==1)
    {
        m=0;
        v=n;
        flg=pri(n);
        if(flg==0)
        {
            printf("%ld is not prime.\n",n);
        }
        else if(flg==1)
        {
            while(n!=0)
            {
                m=m*10+(n%10);
                n=n/10;
            }
            if(m==v)
            {
                printf("%ld is prime.\n",v);
            }
            else if(m!=v)
            {
                flg=pri(m);
                if(flg==0){printf("%ld is prime.\n",v);}
                else if(flg==1){printf("%ld is emirp.\n",v);}
            }
        }

    }
    return 0;
}

