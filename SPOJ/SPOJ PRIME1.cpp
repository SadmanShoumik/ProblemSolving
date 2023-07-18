#include<cstdio>
using namespace std;

long long int a[100005],pri[10000];

void sieve()
{
    long long int i,j,k,l;
    a[0]=1; a[1]=1; a[2]=0;
    for(i=4;i<100005;i=i+2)
    {
        a[i]=1;
    }

    for(i=3;i*i<100005;i=i+2)
    {
        if(a[i]==0)
        {
            for(j=i*i;j<100005;j+=(2*i))
                a[j]=1;
        }
    }
    j=0;
    for(i=0;i<100005;i++)
    {
        if(a[i]==0)
        {
            pri[j]=i;
            j++;
        }
    }
    //j=9593
}

int main()
{
    sieve();
    long long int t,i,j,k,l,a,b,flag;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&a,&b);
        for(j=a;j<=b;j++)
        {
            flag=1;
            for(k=0;pri[k]*pri[k]<=j && pri[k]!=0;k++)
            {
                if(j%pri[k]==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1 && j!=1 && j!=0)
                printf("%lld\n",j);
        }
    }
    return 0;
}
