#include<stdio.h>
int main()
{
    int p,q,r,s,t,n,x,k,sum;
    scanf("%d",&t);
    for(p=1;p<=t;p++)
    {
        sum=0;
        scanf("%d %d %d",&n,&k,&x);
        s=x+k-1;
        for(q=1;q<=n;q++)
        {
            sum=sum+q;
        }
        for(r=x;r<=s;r++)
        {
            sum=sum-r;
        }
        printf("Case %d: %d\n",p,sum);
    }

    return 0;
}
