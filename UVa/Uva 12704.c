#include<stdio.h>
#include<math.h>
int main()
{
    int i,t,r,x,y;
    double l,s;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d %d %d",&x,&y,&r);
            s=r*1.00-sqrt(x*x+y*y);
            l=r*1.00+sqrt(x*x+y*y);
            printf("%0.2lf %0.2lf\n",s,l);
        }
    }
    return 0;
}
