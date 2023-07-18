#include<stdio.h>

int main()

{
    long long int n,i,j;
    while(scanf("%lld",&n)!=EOF){
        j=(n-1)/2;
        i=3*(n*(j+1)+j)-6;
        printf("%lld\n",i);
    }

    return 0;
}
