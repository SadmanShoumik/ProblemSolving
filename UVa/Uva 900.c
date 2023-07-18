#include<stdio.h>
int main()
{
    long long int n,i,j,sum1,sum2,sum,temp;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0){break;}
        sum1=0;
        sum2=1;
        for(i=0;i<n;i++)
        {
            sum=sum1+sum2;
            sum1=sum2;
            sum2=sum;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
