#include<stdio.h>
int main()
{
    int i,j[181];
    for(i=0;i<=180;i=i+6)
    {
        j[i]=1;
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(j[n]==1)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
