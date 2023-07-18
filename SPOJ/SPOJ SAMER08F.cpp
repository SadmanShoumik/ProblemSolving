#include<cstdio>

long long int a[101];

void lel()
{
    a[0]=0;
    a[1]=1;
    int i;
    for(i=2;i<=100;i++)
    {
        a[i]=(i*i)+a[i-1];
    }
}

int main()
{
    lel();

    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

        printf("%lld\n",a[n]);
    }

    return 0;
}
