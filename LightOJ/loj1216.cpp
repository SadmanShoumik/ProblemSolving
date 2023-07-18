#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k;
    double r1,r2,h,p,l,diffr,diffw,cylc,cylw,tric,triw,ans,fullcup,water,pi,ang;
    pi=acos(-1);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);

        diffr=r1-r2;

        l=sqrt((diffr*diffr)+(h*h));
        ang=acos(h/l);
        diffw=p*tan(ang);

        r1=r2+diffw;
        water=(pi*p*((r1*r1)+(r1*r2)+(r2*r2)))/3.0;

        printf("Case %d: %0.10f\n",i,water);

    }
    return 0;
}
