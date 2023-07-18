#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,i;
    double dp,rope,area,leng,wid,p;
    p=3.14159265358979323846;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf",&dp,&rope);
        wid=(rope*rope)/4.0-(dp*dp)/4.0;
        wid=sqrt(wid);
        leng=(rope-dp)/2.0;
        leng=leng+(dp/2.0);
        area=wid*leng*(p);
        printf("%0.3lf\n",area);
    }
    return 0;
}
