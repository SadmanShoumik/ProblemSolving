#include<stdio.h>

int main()
{
    long long int i,n,fac;
    while(scanf("%lld",&n)!=EOF)
    {
        fac=1;
        if(n>=0 && n<=7)
            printf("Underflow!\n");
        else if(n>7 && n<=13)
        {
            for(i=n;i>0;i--)
            {
                fac=fac*i;
            }
            printf("%lld\n",fac);
        }
        else if(n>13)
            printf("Overflow!\n");
        else if(n<0 && n%2==0)
            printf("Underflow!\n");
        else if(n<0 && n%2!=0)
            printf("Overflow!\n");
    }
    return 0;
}
