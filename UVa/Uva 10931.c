#include<stdio.h>
int main()
{
    int n,m;
    int i,count,mod,lim;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0){return 0;}
        int a[1000];
        count=0;
        m=n;

        for(i=0;m>=0;i++)
        {
            mod=m%2;
            m=m/2;
            a[i]=mod;
            if(mod==1)
            {
                count++;
            }
            lim=i;
            if(m==0)
            {
                m=-1;
            }
        }

        printf("The parity of ");

        for(i=lim;i>=0;i--)
        {
            printf("%d",a[i]);
        }

        printf(" is %d (mod 2).\n",count);
    }

    return 0;
}
