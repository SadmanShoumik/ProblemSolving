#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int main()
{
    int t,i,j,k,l;
    double v1,v2,v3,a1,a2,s1,s2,s3,d;
    t=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);

        s1=(v1*v1)/(2.0*a1);
        s2=(v2*v2)/(2.0*a2);
        d=s1+s2;
        s3=(v1*1.0)/a1;
        if(s3<((v2*1.0)/a2))
            s3=(v2*1.0)/a2;
        s3=s3*v3*1.0;
        printf("Case %d: %0.10f %0.10f\n",i+1,d,s3);
    }

    return 0;
}
