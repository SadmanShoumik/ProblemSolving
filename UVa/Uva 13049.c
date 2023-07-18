#include<stdio.h>
int main()
{
    long long int i,j,t,m,n,ac,init,targ,temp,count,a,b;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%lld",&n);
        long long int ini[n],tar[n],r[n];
        char init[n],targ[n];
        m=0;
        scanf("%s",&init);
        for(i=n-1;i>=0;i--)
        {
            ini[i]=init[i]-'0';
        }
        scanf("%s",&targ);
        for(i=n-1;i>=0;i--)
        {
            tar[i]=targ[i]-'0';
        }
        m=0;
        for(i=0;i<n;i++)
        {
            a=ini[i]; b=tar[i];
            if(a==b)
            {
                count=0;
            }
            else if(b>a)
            {
                if(b-a<=5)
                {
                    count=b-a;
                }
                else
                {
                    count=a+(9-b)+1;
                }
            }

            else if(b<a)
            {
                temp=b;
                b=a;
                a=temp;

                if(b-a<=5)
                {
                    count=b-a;
                }
                else
                {
                    count=a+(9-b)+1;
                }
            }
            m=m+count;
        }

        printf("Case %lld: %lld\n",j,m);
    }
    return 0;
}
