#include<stdio.h>
int main()
{
    int i,j,t,n,area,anim,deg,count;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
            count=0;
            scanf("%d",&n);
            for(j=0;j<n;j++)
            {
                scanf("%d %d %d",&area,&anim,&deg);
                count=count+(area*deg);
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
