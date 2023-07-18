#include<stdio.h>
int main()
{
    int t,r,w,h,i,j;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            int x[4],y[4];
            scanf("%d",&r);
            w=3*r;
            h=5*r;

            printf("Case %d:\n",i);

            x[0]=-(h*45)/100; y[0]=w/2;
            x[1]=(h*55)/100; y[1]=w/2;
            x[2]=(h*55)/100; y[2]=-(w/2);
            x[3]=-(h*45)/100; y[3]=-(w/2);

            for(j=0;j<4;j++)
            {
                printf("%d %d\n",x[j],y[j]);
            }
        }
    }

    return 0;
}
