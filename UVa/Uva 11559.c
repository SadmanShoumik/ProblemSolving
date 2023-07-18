#include<stdio.h>
int main()
{
    int n,b,h,w,cost1,cost2,i,j,flag;
    while(scanf("%d %d %d %d",&n,&b,&h,&w)!=EOF)
    {
        int hb[h],hwb[h][w];
        cost1=b+1;
        for(i=0;i<h;i++)
        {
            scanf("%d",&hb[i]);
            for(j=0;j<w;j++)
            {
                scanf("%d",&hwb[i][j]);
            }
        }
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                if(hwb[i][j]>=n)
                {
                    cost2=n*hb[i];
                    if(cost2<cost1)
                        cost1=cost2;
                }
            }
        }
        if(cost1>b)
            printf("stay home\n");
        else if(cost1<=b)
            printf("%d\n",cost1);
    }
    return 0;
}
