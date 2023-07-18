#include<stdio.h>
int main()
{
    long long int n,d,j,i,count,count2;
    while(scanf("%lld %lld",&n,&d)!=EOF)
    {
        i=n;
        long long int val[10000];
        count=1;
        count2=0;
        val[0]=n;
        while(n>1 && d>1 && n%d==0)
        {
            if(n%d==1)
            {
                break;
            }
            n=n/d;
            val[count]=n;
            count++;
        }
        if(n>1 || n<1 || d==1 || d==0 || d>i){printf("Boring!\n");}
        else
        {
            for(j=0;j<count;j++)
            {
                if(j!=0){printf(" ");}
                printf("%lld",val[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
