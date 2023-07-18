#include<cstdio>
#include<map>

using namespace std;

map<long long int, long long int> memo;

long long int check(long long int n)
{
    long long int res;
    if(memo[n]==0 && n!=0)
    {
        res=(n/2)+(n/3)+(n/4);
        if(res<n)
        {
            memo[n]=n;
            return memo[n];
        }
        else
        {
            memo[n]=check(n/2)+check(n/3)+check(n/4);
            return memo[n];
        }
    }
    return memo[n];
}

int main()
{
    long long int n,res;
    while(scanf("%lld",&n)!=EOF)
    {
        res=check(n);
        printf("%lld\n",res);
    }
    return 0;
}
