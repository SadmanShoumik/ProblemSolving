#include<stdio.h>
int main()
{
    int i,t,n,c,cap;
    while(scanf("%d",&t)!=EOF)
    {
        for(c=1;c<=t;c++)
        {
            scanf("%d",&n);
            int p[n];

            for(i=0;i<n;i++)
            {
                scanf("%d",&p[i]);
            }

            cap=n/2;

            printf("Case %d: %d\n",c,p[cap]);

        }
    }

    return 0;
}
