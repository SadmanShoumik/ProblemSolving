#include<stdio.h>
int main()
{
    int i,n,sum,flag;
    flag=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(flag==0){printf("PERFECTION OUTPUT\n");}
        flag++;
        if(n==0){printf("END OF OUTPUT\n"); break;}
        sum=0;

        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }

        if(sum==n)
        {
            printf("%5.0d  PERFECT\n",n);
        }
        else if(sum<n)
        {
            printf("%5.0d  DEFICIENT\n",n);
        }
        else if(sum>n)
        {
            printf("%5.0d  ABUNDANT\n",n);
        }
    }

    return 0;
}
