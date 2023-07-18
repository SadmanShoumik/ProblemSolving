#include<cstdio>

using namespace std;

int main()
{
    long long int a,b,c,diff1,diff2;
    while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF)
    {
        if(a==0 && b==0 && c==0)
            break;

        diff1=c-b;
        diff2=b-a;

        if(diff1==diff2)
        {
            printf("AP %lld\n",c+diff1);
        }
        else
        {
            diff1=c/b;
            printf("GP %lld\n",c*diff1);
        }

    }
    return 0;
}
