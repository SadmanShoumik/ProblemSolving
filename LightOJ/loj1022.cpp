#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,i,j,k;
    double r,area,carea,sarea,len,pi;
    pi=2*acos(0.0);
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        len=r*2; sarea=len*len; carea=pi*r*r;
        area=sarea-carea;
        printf("Case %lld: %0.2lf\n",i,area);
    }
    return 0;
}
