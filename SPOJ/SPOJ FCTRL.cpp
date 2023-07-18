#include<cstdio>
using namespace std;

int main()
{
    long long int t,i,j,k,n,res;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        res=0;
        scanf("%lld",&n);
        while(n>0)
        {
            res=res+(n/5);
            n/=5;
        }
        printf("%lld\n",res);
    }
    return 0;
}
