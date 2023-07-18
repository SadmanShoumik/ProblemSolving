#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    double p,d,q,t1,t2,diff,r;
    scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lf %lf %lf",&d,&p,&q);
            if(p==0 || q==0 || p>=q){printf("Case %d: can't determine\n",i);}
            else if(d==0){printf("Case %d: 0.000\n",i);}
            else
            {
                t1=d*1.0/q;
                r=(q*q)-(p*p);
                r=sqrt(r);
                if(r!=0)
                    t2=d*1.0/r;
                else
                    t2=0;
                diff=t2-t1;
                if(diff>0)
                    printf("Case %d: %0.3lf\n",i,diff);
                else
                    printf("Case %d: can't determine\n",i);
            }
        }
    return 0;
}
