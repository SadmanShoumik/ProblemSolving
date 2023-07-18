#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,i,j,k,l,temp,len,sum,b;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        char a[300];

        for(j=0;j<300;j++)
            a[j]='\0';

        scanf("%s %lld",&a,&b);

        len=strlen(a);
        if(b<0)
            b=-b;
        j=0;
        if(a[0]=='-')
            j=1;
        for(;j<len;j++)
        {
            a[j]=a[j]-48;
        }
        j=0;
        if(a[0]=='-')
            j=1;
        sum=0;
        while(j<len)
        {
            while(sum<b && j<len)
            {
                sum=(sum*10)+a[j];
                //printf("%lld %lld\n",j,sum);
                j++;
            }
            sum%=b;
        }
        if(sum>=b)
        {
            sum=sum%b;
        }

        if(sum==0)
            printf("Case %lld: divisible\n",i);
        else if(sum!=0)
            printf("Case %lld: not divisible\n",i);
    }
    return 0;
}
