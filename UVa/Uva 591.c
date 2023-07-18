#include<stdio.h>
int main()
{
    long long int n,i,j,avg,moves;
    j=0;
    while(scanf("%lld",&n)!=EOF)
    {
        j++;
        if(n==0){break;}
        long long int a[n];
        avg=0;
        moves=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            avg+=a[i];
        }
        avg=avg/n;
        for(i=0;i<n;i++)
        {
            if(a[i]>avg)
            {
                moves=moves+(a[i]-avg);
            }
        }
        printf("Set #%lld\n",j);
        printf("The minimum number of moves is %lld.\n",moves);
        printf("\n");
    }
    return 0;
}
