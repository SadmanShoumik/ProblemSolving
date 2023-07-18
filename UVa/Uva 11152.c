#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    double a,b,c,s,sp,area,sun,vio,ro,r1,r2;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        s=a+b+c;
        s=s/2.0;
        sp=a*b*c*1.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c)*1.0);
        r1=area/(s*1.0);
        r2=sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)*1.0);
        r2=sp/(r2*1.0);
        ro=r1*r1*PI*1.0;
        vio=(area-ro)*1.00;
        sun=(PI*r2*r2)-area;
        area=area-ro;
        printf("%0.4lf %0.4lf %0.4lf\n",sun,area,ro);
    }
    return 0;
}
