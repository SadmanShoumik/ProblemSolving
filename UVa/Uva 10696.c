#include<stdio.h>
int f91(int a)
{
    if(a>=101)
    {
        a=a-10;
    }
    return a;
}
int main()
{
    int n,m;
    while(scanf("%d",&n)!=EOF)
    {
        m=n;
        if(n==0){break;}
        else if(n>=101)
        {
            n=f91(n);
        }
        while(n<=100)
        {
            n=f91(n);
            if(n=91)
            {
                break;
            }
        }
        printf("f91(%d) = %d\n",m,n);
    }
    return 0;
}
