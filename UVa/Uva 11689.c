#include<stdio.h>
int main()
{
    int n,m,summ,nrem,t,i,sum,rem,e,f,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&e,&f,&c);
        n=e+f;
        m=n;
        sum=n;
        rem=n/c;
        while(1)
        {
            nrem=n-(rem*c);
            n=nrem+rem;
            sum=sum+rem;
            rem=n/c;
            if(n<c){break;}
        }
        summ=sum-m;
        printf("%d\n",summ);
    }
    return 0;
}
