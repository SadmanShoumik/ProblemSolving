#include<cstdio>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    long double pi,rb,rs,db,ds,ang;
    int n,t,i,div;
    pi=acos(-1);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        cin>>rb>>n;
        ang=pi/n;
        rs=rb*sin(ang);
        rs=rs/(1+sin(ang));
        printf("Case %d: %0.10llf\n",i,rs);
    }
    return 0;
}
