#include<stdio.h>
long int ack(long int a)
{
    long int count=0;
    while(1)
    {
        if(a%2==0)
        {
            a=a/2;
        }
        else
        {
            a=(3*a)+1;
        }
        count++;
        if(a==1){break;}
    }
    return count;
}

int main()
{
    long int a,b,i,max,m,temp,c;
    while(scanf("%ld %ld",&a,&b)!=EOF)
    {
        c=0;
        if(a==0 && b==0){break;}
        if(a>b){temp=a; a=b; b=temp;}
        max=0;
        for(i=a;i<=b;i++)
        {
            c=ack(i);
            if(c>max)
            {
                max=c;
                m=i;
            }
        }
        printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",a,b,m,max);
    }
    return 0;
}
