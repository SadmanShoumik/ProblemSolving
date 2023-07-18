#include<cstdio>

using namespace std;

int main()
{
    long long int t,n,m,i,j,k,l,total,avg,res;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==-1)
            break;

        long long int a[n];
        total=0; res=0;

        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            total=total+a[i];
        }

        avg=total/n;

        if(avg*n!=total)
            printf("-1\n");
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]>avg)
                {
                    res=res+(a[i]-avg);
                }
            }
            printf("%lld\n",res);
        }


    }
    return 0;
}
