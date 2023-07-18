#include<stdio.h>
int main()
{
    int t,i,j,m,n,k,p,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        r=k;
        for(j=1;j<=p;j++)
        {
            r=r+1;
            if(r>n)
            {
                r=1;
            }
        }
        printf("Case %d: %d\n",i,r);
    }
    return 0;
}
