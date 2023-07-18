#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

long long int a[21];

void func()
{
    a[0]=1; a[1]=1;
    long long int i;
    for(i=2;i<=20;i++)
    {
        a[i]=i*a[i-1];
    }
}

int main()
{
    func();
    long long int t,i,j,k,l,n,sum;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        int b[21];
        memset(b, 0, sizeof(b));
        scanf("%lld",&n);
        for(j=20;j>=0;j--)
        {
            if(a[j]<=n && sum+a[j]<=n)
            {
                sum+=a[j];
                b[j]=1;
            }
        }
        if(sum==n)
        {
            l=0;
            printf("Case %lld: ",i);
            for(j=0;j<21;j++)
            {
                if(b[j]==1)
                {
                    if(l!=0)
                        printf("+");
                    printf("%lld!",j);
                    l=1;
                }
            }
            printf("\n");
        }
        else
            printf("Case %lld: impossible\n",i);
    }
    return 0;
}
