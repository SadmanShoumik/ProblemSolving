#include<cstdio>

using namespace std;

int main()
{
    long int t,i,j,k,a,b,diff,res;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&a,&b);
        diff=a-b;
        if(diff==0)
        {
            if(a%2==0)
                res=a*2;
            else
                res=(a*2)-1;
        }
        else if(diff==2)
        {
            if(a%2==0)
                res=a+b;
            else
                res=(a+b)-1;
        }
        else
            res=-1;

        if(res==-1)
        {
            printf("No Number\n");
        }
        else
            printf("%ld\n",res);
    }
    return 0;
}
