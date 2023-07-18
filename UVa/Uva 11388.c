#include<stdio.h>

int main()
{
    long int t,i,j,k,lcm,gcd,x,y,xy;
    double z;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&gcd,&lcm);
        z=(lcm*1.0)/gcd;
        xy=lcm/gcd;
        if(z!=xy)
        {
            printf("-1\n");
        }
        else if(xy==z)
        {
            x=gcd*1;
            y=gcd*xy;
            printf("%ld %ld\n",x,y);
        }
    }
    return 0;
}
