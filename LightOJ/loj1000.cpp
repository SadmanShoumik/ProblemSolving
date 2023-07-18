#include<cstdio>

using namespace std;

int main()
{
    int i,t,a,b,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&a);
        if(a>=10)
        {
            a=a-10;
            b=10;
        }
        else
            b=0;
        printf("%d %d\n",b,a);
    }
    return 0;
}
