#include<cstdio>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,j,sum,x;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        char a[10];
        scanf("%d",&t);
        sum=0;
        printf("Case %d:\n",j);
        for(i=0;i<t;i++)
        {
            scanf("%s",&a);
            if(strcmp(a,"donate")==0)
            {
                scanf("%d",&x);
                sum=sum+x;
            }
            else
            {
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}
