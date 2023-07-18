#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,a,b,res,i,j,temp,flag;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a>=4 && b>=4)
        {
            a=a*b;
            if(a%2==0)
                res=a/2;
            else if(a%2==1)
            {
                a++;
                res=a/2;
            }
        }
        else if(a<4 || b<4)
        {
            if(a>b)
            {
                temp=a;
                a=b;
                b=temp;
            }
            if(a==1)
            {
                res=b;
            }
            else if(a==2)
            {
                if(b<=4)
                    res=4;
                else if(b>4)
                {
                    res=0; flag=1;
                    for(j=1;j<=b;j++)
                    {
                        if(flag>4)
                            flag=1;
                        if(flag==1 || flag==2)
                        {
                            res+=2;
                        }
                        flag++;
                    }
                }
            }
            else if(a==3)
            {
                res=a*b;
                if(res%2==1)
                    res++;
                res=res/2;
            }
        }
        printf("Case %lld: %lld\n",i,res);
    }
    return 0;
}
