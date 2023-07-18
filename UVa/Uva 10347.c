#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,area,s;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        if(a+b>c && b+c>a && c+a>b)
        {
            s=a+b+c;
            s=s/2.0;
            area=s*(s-a)*(s-b)*(s-c);
            area=area*16.0/9.0;
            area=sqrt(area);
            printf("%0.3lf\n",area);
        }
        else
        {
            printf("-1.000\n");
        }
    }
    return 0;
}
