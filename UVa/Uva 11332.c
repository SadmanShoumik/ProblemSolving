#include<stdio.h>

int main()

{
    long long int i,a;
    int mod,sum1,sum2,flag;

    while(scanf("%lld",&a)!=EOF)
    {

        if(a==0)
        {
            return 0;
        }

        sum1=0;

        for(i=a;i!=0;)
        {
            mod=i%10;
            sum1=sum1+mod;
            i=i/10;
        }

        while(sum1>9)
        {
            a=sum1;
            sum1=0;

            for(i=a;i!=0;)
            {
                mod=i%10;
                sum1=sum1+mod;
                i=i/10;
            }

        }

        printf("%d\n",sum1);

    }

    return 0;
}
