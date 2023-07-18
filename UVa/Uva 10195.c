#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,flag,area,r;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        flag=0;
        s=a+b+c;
        s=s/2.00;
        if(s==0){printf("The radius of the round table is: %0.3lf\n",s); flag=1;}
        area=sqrt(s*(s-a)*(s-b)*(s-c)*1.00);
        r=area/(s*1.00);
        if(flag==0)
            printf("The radius of the round table is: %0.3lf\n",r);
    }
    return 0;
}
