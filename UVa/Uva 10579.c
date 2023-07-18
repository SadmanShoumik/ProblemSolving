
#include<stdio.h>
int range=5001;
int length=2000;
int fib[5001][1101];

void fibo()
{
    int i,j,carry;
    fib[0][1100]=0; fib[1][1100]=1;
    for(i=2;i<=5000;i++)
    {
        carry=0;
        for(j=1100;j>=0;j--)
        {
            fib[i][j]=carry+fib[i-1][j]+fib[i-2][j];
            carry=0;
            if(fib[i][j]>=10)
            {
                carry=fib[i][j]/10;
                fib[i][j]=fib[i][j]%10;
            }

        }
    }
}

int main()
{
    fibo();
    long long int n,i,j,flag,line;
    line=1;
    while(scanf("%lld",&n)!=EOF)
    {
        flag=0;
        int ans[1101];
        j=0;
        for(i=1100;i>=0;i--)
        {
            ans[j]=fib[n][i];
            j++;
        }
        for(i=j-1;i>=0;i--)
        {
            if(ans[i]!=0 && flag==0)
                flag=1;
            if(flag==1)
            {
                printf("%d",ans[i]);
            }
        }
        if(n==0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
