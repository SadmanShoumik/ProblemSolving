#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,m,n,ans,in;
    double dou;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        getchar();
        char name;
        scanf("%c",&name);
        while(name=='\n')
        {
            scanf("%c",&name);
        }
        scanf("%d %d",&m,&n);
        if(name=='r')
        {
            if(m<=n)
            {
                printf("%d\n",m);
            }
            else if(n<m)
            {
                printf("%d\n",n);
            }
        }
        else if(name=='k')
        {
            ans=m*n;
            if(ans%2!=0)
                ans=ans+1;
            ans=ans/2;
            printf("%d\n",ans);
        }
        else if(name=='Q')
        {
            if(m==n)
            {
                printf("%d\n",m);
            }
            else if(m!=n)
            {
                if(m<n)
                {
                    printf("%d\n",m);
                }
                else if(n<m)
                {
                    printf("%d\n",n);
                }
            }

        }
        else if(name=='K')
        {
            if(m%2!=0)
                m=m+1;
            if(n%2!=0)
                n=n+1;
            ans=(m/2)*(n/2);
            printf("%d\n",ans);
        }
    }
    return 0;
}
