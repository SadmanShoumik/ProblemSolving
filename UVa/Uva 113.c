#include<stdio.h>
#include<math.h>
int main()
{
    double n,p,k,n2;
    while(scanf("%lf",&p)!=EOF)
    {
        scanf("%lf",&n);
        k=pow(n,(1/p));
        printf("%0.0lf\n",k);
    }
    return 0;
}
