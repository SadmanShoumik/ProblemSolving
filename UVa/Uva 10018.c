#include<stdio.h>
#include<math.h>
long long int rev(long long int n)
{
    long long int count=0,i,j,newd,m,res=0,x,y;
    m=n;
    for(i=0;m>=1;i++)
    {
        m=m/10;
        count++;
    }
    long long int c[count];
    for(i=1;i<=count;i++)
    {
        c[i]=n%10;
        n=n/10;
    }
    for(i=1;i<=count;i++)
    {
        j=count-i;
        x=pow(10,j);
        if(x%10!=0 && x!=1){x=x+1;}
        y=c[i]*x;
        res=res+y;
    }
    return res;
}

long long int pal(long long int n)
{
    long long int count=0,m,i,flag=0;
    m=n;
    for(i=0;m>=1;i++)
    {
        m=m/10;
        count++;
    }
    long long int a[count+1],b[count+1];
    for(i=1;i<=count;i++)
    {
        a[i]=n%10;
        b[count+1-i]=a[i];
        n=n/10;
    }
    for(i=1;i<=count;i++)
    {
        if(a[i]==b[i])
        {
            flag++;
        }
    }
    if(flag==count)
    {
        n=1;
    }
    else if(flag<count)
    {
        n=0;
    }
    return n;
}

long long int main()
{
    long long int i,t,a,b,sum,flag,cou;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&a);
        cou=0;
        sum=a;
        flag=pal(a);
        while(flag==0)
        {
            b=rev(a);
            sum=sum+b;
            a=sum;
            flag=pal(sum);
            cou++;
        }
        printf("%lld %lld\n",cou,sum);
    }
    return 0;
}
