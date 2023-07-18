#include<cstdio>
using namespace std;
int main()
{
    long long int b;
    int arr[10],a,t,i,j,k,l;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %lld",&a,&b);
        a=a%10;
        if(b==0)
        {
            printf("1\n"); continue;
        }
        else if(a==0 || a==6 || a==5 || a==1)
        {
            printf("%d\n",a); continue;
        }
        else if(a==4 || a==9)
        {
            if(b%2==0)
                printf("%d\n",(a*a)%10);
            else
                printf("%d\n",a%10);
        }
        else
        {
            if(b%4==0)
                printf("%d\n",(a*a*a*a)%10);
            else
            {
                k=1;
                for(j=1;j<=b%4;j++)
                {
                    k=k*a;
                }
                printf("%d\n",k%10);
            }
        }
    }
    return 0;
}
