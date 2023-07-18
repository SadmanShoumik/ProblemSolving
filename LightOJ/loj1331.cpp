#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k;
    double s,r1,r2,r3,r12,r23,r31,ang1,ang2,ang3,area,ar1,ar2,ar3;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        r12=r1+r2; r23=r2+r3; r31=r3+r1;
        ang3=((r23*r23)+(r31*r31)-(r12*r12))/(2.0*r23*r31); ang3=acos(ang3);
        ang1=((r31*r31)+(r12*r12)-(r23*r23))/(2.0*r12*r31); ang1=acos(ang1);
        ang2=((r12*r12)+(r23*r23)-(r31*r31))/(2.0*r12*r23); ang2=acos(ang2);
        ar1=((r1*r1)*ang1)/2;
        ar2=((r2*r2)*ang2)/2;
        ar3=((r3*r3)*ang3)/2;
        s=r12+r23+r31; s=s/2;
        area=s*(s-r12)*(s-r23)*(s-r31);
        area=sqrt(area);
        area=area-(ar1+ar2+ar3);
        printf("Case %d: %0.10f\n",i+1,area);
    }
    return 0;
}
