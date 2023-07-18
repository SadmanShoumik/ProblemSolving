#include<stdio.h>
int main()
{
    int i,j,t,n,sum,count;
    double avg,per;
    char p='%';
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int num[n];
        sum=0;
        count=0;

        for(j=0;j<n;j++)
        {
            scanf("%d",&num[j]);
            sum+=num[j];
        }

        avg=1.00*sum/n;

        for(j=0;j<n;j++)
        {
            if(num[j]>avg)
            {
                count++;
            }
        }

        per=count*100.00/n;

        printf("%0.3lf%c\n",per,p);

    }

    return 0;
}
