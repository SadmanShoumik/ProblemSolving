#include<stdio.h>
int main()
{
    long long int n,i,j,k,l,count;
    while(scanf("%lld",&n)!=EOF)
    {
        count=0;
        if(n<3)
            break;
        for(i=1;i<=n-2;i++)
        {
            for(j=i+1;j<=n-1;j++)
            {
                for(k=j+1;i+j>k,k<=n;k++)
                {
                    count++;
                }
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
