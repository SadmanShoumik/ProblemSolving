#include<stdio.h>
int main()
{
    long long int n,i;
    long long int sum;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n<0){break;}
        sum=1;
        for(i=0;i<=n;i++)
        {
            sum=sum+i;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
