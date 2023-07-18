#include<cstdio>

using namespace std;

int main()
{
    long long int n,i,j,k,l,res=0;
    scanf("%lld",&n);
    k=0;
    for(i=1;i*i<=n;i++)
    {
        j=n/i;
        res=res+j-k;
        k++;
    }
    printf("%lld\n",res);
    return 0;
}
