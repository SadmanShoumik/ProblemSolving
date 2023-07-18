#include<stdio.h>

int main()

{
    long long int a,b,c,d,sum;
    int count,carry;

    while(scanf("%lld %lld",&a,&b)!=EOF)
    {

        count=0;
        carry=0;
        sum=0;
        c=0;
        d=0;

        if(a==0 && b==0)
        {
            return 0;
        }

        while(a>0 || b>0)
        {
            c=a%10;
            d=b%10;
            a=a/10;
            b=b/10;
            sum=c+d+carry;
            if(sum>=10)
            {
                count++;
                carry=1;
            }
            else
            {
                carry=0;
            }
        }

        if(count==1)
        {
            printf("%d carry operation.\n",count);
        }
        else if(count==0)
        {
            printf("No carry operation.\n");
        }
        else if(count>1)
        {
            printf("%d carry operations.\n",count);
        }

    }

    return 0;
}
