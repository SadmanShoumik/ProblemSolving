#include<stdio.h>
int main()
{
    long long int gen,i,sum,sum1,sum2,temp;
    while(scanf("%lld",&gen)!=EOF)
    {
        if(gen==0){break;}
        sum1=0;
        sum2=1;
        for(i=0;i<gen;i++)
        {
            sum=sum1+sum2;
            sum1=sum2;
            sum2=sum;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
