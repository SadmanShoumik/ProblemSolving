#include<stdio.h>
int main()
{
    long long int sum,sum1,sum2,res,i,j,k,a,b,count=1;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        sum1=1; sum2=1;
        if(a==0 && b==0){break;}
        for(i=1;i<=a;i++)
        {
            sum1=i*sum1;
        }
        for(i=1;i<=b;i++)
        {
            sum2=sum2*i;
        }
        sum=sum1*sum2;
        res=sum/4;
        printf("Case %lld: %lld\n",count,res);
        count++;
    }
    return 0;
}
