#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,j,k,l,a,b,c,s[3],e[3];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        s[0]=s[1]=s[2]=1;
        e[0]=e[1]=e[2]=1000;
        for(j=0;j<n;j++)
        {
            for(k=0;k<3;k++)
            {
                scanf("%d",&a);
                if(a>s[k])
                    s[k]=a;
            }
            for(k=0;k<3;k++)
            {
                scanf("%d",&a);
                if(a<e[k])
                    e[k]=a;
            }
        }
        //printf("%d %d %d %d %d %d\n",s[0],s[1],s[2],e[0],e[1],e[2]);
        if(s[0]<e[0] && s[1]<e[1] && s[2]<e[2])
        {
            c=(e[0]-s[0])*(e[1]-s[1])*(e[2]-s[2]);
            printf("Case %d: %d\n",i,c);
        }
        else
            printf("Case %d: 0\n",i);
    }
    return 0;
}
