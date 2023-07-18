#include<stdio.h>
int main()
{
    long long int i,j,k,l,s,d,flag;
    while(scanf("%lld %lld",&s,&d)!=EOF)
    {
        flag=0;
        i=s-1;
        for(l=s;flag==0;l++)
        {
            k=(l*(l+1)/2)-(i*(i+1)/2);
            if(k>=d)
                flag=1;
        }
        printf("%lld\n",l-1);
    }
    return 0;
}
