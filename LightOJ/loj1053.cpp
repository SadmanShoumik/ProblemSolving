#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,a[3],i,j,big,rest;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        big=0; rest=0;
        for(j=0;j<3;j++)
        {
            scanf("%lld",&a[j]);
            if(a[j]>big)
            {
                big=a[j];
            }
        }
        for(j=0;j<3;j++)
        {
            if(big==a[j])
            {
                a[j]=0;
                break;
            }
        }
        for(j=0;j<3;j++)
        {
            rest+=(a[j]*a[j]);
        }
        big=big*big;
        if(big==rest)
        {
            printf("Case %lld: yes\n",i);
        }
        else if(big!=rest)
        {
            printf("Case %lld: no\n",i);
        }
    }
    return 0;
}
