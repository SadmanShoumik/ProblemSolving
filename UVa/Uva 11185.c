#include<stdio.h>

int main()

{
    long int n,mod,d;
    int i,l,lim;

    while(scanf("%ld",&n)!=EOF)
    {
        if(n<0){return 0;}

        int a[10000];

        for(i=0;n>=0;i++)
        {
            mod=n%3;
            a[i]=mod;
            n=n/3;
            lim=i;
            if(n==0)
            {
                n=-1;
            }
        }

        for(i=lim;i>=0;i--)
        {
            printf("%d",a[i]);
        }

        printf("\n");
    }

    return 0;
}
