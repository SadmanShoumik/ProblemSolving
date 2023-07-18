#include<stdio.h>
int main()
{
    int i,t;
    double c1,f,f1,f2,c2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf",&c1,&f);
        c2=(f*5.00)/9.00;
        c1=c1+c2;
        printf("Case %d: %0.2lf\n",i,c1);
    }
    return 0;
}
