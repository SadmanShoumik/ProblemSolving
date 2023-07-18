#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k,l,n,p,q,sum,cnt;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&p,&q);
        int a[n];
        cnt=0; sum=0;

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(sum+a[j]<=q && cnt+1<=p)
            {
                sum+=a[j];
                cnt++;
            }
        }
        printf("Case %d: %d\n",i,cnt);
    }
    return 0;
}
