#include<stdio.h>

long long int recur(long long int x)
{
    while(x%10<=0)
    {
        x=x/10;
    }
    x=x%10;
    return x;
}
int main()
{
    long long int p,q,i,sum,x,y,count,flag,k;
    while(scanf("%lld %lld",&p,&q)!=EOF)
    {
        sum=0;
        flag=0;
        count=0;
        if(p%10==0)
        {
            y=q%10;
            q=q-y;
            for(i=0;i<y;i++)
            {
                sum=sum+i;
            }
            if(p==q)
            {
                sum=sum+recur(p);
            }
            else if(p!=q)
            {
                k=(((q)*(q-1))/2)-(((p)*(p-1))/2);
                sum=sum+k;
            }
            k=(q-p-1)*45;
            sum=sum+k;
        }
        else if(p%10!=0)
        {
            y=q%10;
            q=q-y;
            x=p%10;

        }
        printf("%lld\n",sum);
    }
    return 0;
}
