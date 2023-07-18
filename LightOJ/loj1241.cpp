#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k,l,n,cnt,diff;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int a[n];
        cnt=0;
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        if(a[0]>2)
        {
            cnt+=1+((a[0]-3)/5);
        }
        for(j=1;j<n;j++)
        {
            if(a[j]>a[j-1])
            {
                cnt+=1+((a[j]-a[j-1]-1)/5);
            }
        }
        printf("Case %d: %d\n",i,cnt);
    }
    return 0;
}
