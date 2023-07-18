#include<stdio.h>
#include<math.h>

int main()
{
    int t,i,j,k,l;
    double a,b,c,gcd;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        double x;
        scanf("%lf %lf",&a,&c);
        int flag=0;
        x=c/a*1.0;
        for(gcd=1;flag<=0;gcd++)
        {
            for(b=1;b/gcd<=x;b++)
            {
                if(b/gcd==x)00000
                {
                    printf("%0.0lf\n",b);
                    flag=100;
                }
            }
            if(gcd>c)
            {
                printf("NO SOLUTION\n");
                break;
            }
        }
    }
    return 0;
}
