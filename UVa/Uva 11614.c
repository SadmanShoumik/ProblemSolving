#include<stdio.h>
#include<math.h>
int main()
{
    long long int war,i,j,t,row;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&war);
        row=(sqrt(1+8*war)-1)/2;
        printf("%lld\n",row);
    }
    return 0;
}
