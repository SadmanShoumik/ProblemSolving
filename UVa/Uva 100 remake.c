#include<stdio.h>

int fnc(long int n)

{
    long int i;
    int count=0;

    for(i=0;n!=1;i++)
    {
        if(n%2==0)
        {
            n=n/2;
            count++;
        }

        else
        {
        n=3*n+1;
        count++;
        }
    }

    count++;

    return count;
}


int main()

{
    long int a,b,n,m;
    int j,sum,max;

    while(scanf("%ld %ld",&a,&b)!=EOF)
    {
        max=0;
        m=a;
        n=b;

        if(a>b)
        {
            n=a;
            m=b;
        }

        for(j=m;j<=n;j++)
        {
            sum=fnc(j);
            if(sum>max)
            {
                max=sum;
            }
        }

        printf("%ld %ld %d\n",a,b,max);
    }

    return 0;
}
