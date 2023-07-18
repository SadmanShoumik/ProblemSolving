#include<stdio.h>
int main()
{
    int i,t;
    long int m,tax,b;
    double a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld",&m);
        if(m<=180000)
        {
            tax=0;
            printf("Case %d: %ld\n",i,tax);
        }
        else if(m>180000 && m<=480000)
        {
            a=(m-180000)/10.0;
            b=a;
            if(a>b){a=a+1;}
            tax=a;
            if(tax<2000){tax=2000;}
            printf("Case %d: %ld\n",i,tax);
        }
        else if(m>480000 && m<=880000)
        {
            a=(m-480000)*3/20.0;
            b=a;
            if(a>b){a=a+1;}
            tax=30000+a;
            printf("Case %d: %ld\n",i,tax);
        }
        else if(m>880000 && m<=1180000)
        {
            a=(m-880000)/5.0;
            b=a;
            if(a>b){a=a+1;}
            tax=90000+a;
            printf("Case %d: %ld\n",i,tax);
        }
        else if(m>1180000)
        {
            a=(m-1180000)/4.0;
            b=a;
            if(a>b){a=a+1;}
            tax=150000+a;
            printf("Case %d: %ld\n",i,tax);
        }
    }
    return 0;
}
