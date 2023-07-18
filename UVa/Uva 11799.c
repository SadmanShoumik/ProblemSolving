#include<stdio.h>

int main()
{
    int max,t,n,i,j,spd;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        max=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&spd);
            if(spd>max)
            {
                max=spd;
            }
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
