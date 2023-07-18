#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,m,n,pi;
    pi=acos(-1);
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&m,&n)!=EOF)
    {
        double x,y,ab,am,an,ans;
        x=(x1-x2)*(x1-x2);
        y=(y1-y2)*(y1-y2);
        ab=sqrt(x+y);
        am=ab/tan(m*pi/180.0);
        an=ab/tan(n*pi/180.0);
        ans=am+an;
        printf("%0.3lf\n",ans);
    }
    return 0;
}
