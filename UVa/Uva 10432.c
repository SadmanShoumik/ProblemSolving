#include<stdio.h>
#include<math.h>
#define PI acos(-1)

int main()

{
    int n,i;
    double r,theta,areap,a,b;

    while(scanf("%lf %d",&r,&n)!=EOF){

            theta=360/(n*2.0);
            a=r*sin(theta*PI/180.0);
            b=r*cos(theta*PI/180.0);
            areap=n*a*b*1.0;
            printf("%0.3lf\n",areap);

    }

    return 0;
}
