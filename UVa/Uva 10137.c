#include<stdio.h>
int main()
{
    int t,i;
    while(scanf("%d",&t)!=EOF)
    {
        if(t==0){break;}
        double mon[t],avg=0,pos=0,neg=0,baal;
        for(i=0;i<t;i++)
        {
            scanf("%lf",&mon[i]);
            avg+=mon[i];
        }
        avg=avg/t;
        for(i=0;i<t;i++)
        {
            baal=(long)((mon[i]-avg)*100.0)/100.0;
            if(baal>0)
                pos+=baal;
            else
                neg+=baal;
        }
        neg=-neg;
        if(pos>=neg)
            printf("$%0.2lf\n",pos);
        else
            printf("$%0.2lf\n",neg);
    }
    return 0;
}
