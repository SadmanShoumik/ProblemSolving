#include<stdio.h>
#include<math.h>

int main()

{
    int i,n,sumsq;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==0){return 0;}

        sumsq=0;

        for(i=n;i>0;i--)
        {
            sumsq=sumsq+(i*i);
        }

        printf("%d\n",sumsq);

    }

    return 0;
}
