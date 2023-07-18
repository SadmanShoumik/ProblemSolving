#include<stdio.h>
int main()
{
    int a,b,c,m,n,o,temp,i;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a==0 && b==0 && c==0){break;}
        temp=0;
        for(i=0;i<=100;i++)
        {
            if(a<b)
            {
                temp=a;
                a=b;
                b=temp;
            }
            else if(a<c)
            {
                temp=c;
                c=a;
                a=temp;
            }
            else if(b<c)
            {
                temp=b;
                b=c;
                c=temp;
            }
        }
        m=a*a; n=b*b; o=c*c;
        if(m==n+o)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
