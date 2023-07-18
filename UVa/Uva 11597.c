#include<stdio.h>
int main()
{
    int n,i;
    i=1;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        n=n/2;
        printf("Case %d: %d\n",i,n);
        i++;
    }
    return 0;
}
