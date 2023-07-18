#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,m,k,p,i,j,c,d,l,flag,f2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        flag=0;
        scanf("%d %d %d",&n,&m,&k);
        int a[n][k],b[n];
        for(c=0;c<n;c++)
        {
            b[c]=0;
            for(d=0;d<k;d++)
                scanf("%d",&a[c][d]);
        }
        scanf("%d",&p);
        int ans[p];
        for(j=0;j<p;j++)
        {
            scanf("%d",&ans[j]);
        }


        for(c=0;c<n;c++)
        {
            for(d=0;d<k && b[c]!=1;d++)
            {
               for(l=0;l<p;l++)
               {
                   //printf("pos a[%d][%d]: %d ans[%d]: %d\n",c,d,a[c][d],l,ans[l]);
                    if(a[c][d]>0 && a[c][d]==ans[l])
                    {
                        //printf("yesh b[%d] %d\n",c,ans[l]);
                        b[c]=1;
                        break;
                    }
               }
            }
        }
        for(c=0;c<n;c++)
        {
            int mincnt=0;
            for(d=0;d<k;d++)
            {
                if(a[c][d]<0)
                        mincnt++;
                for(l=0;l<p;l++)
                {
                    //printf("neg a[%d][%d]: %d ans[%d]: %d\n",c,d,a[c][d],l,ans[l]);
                    if(a[c][d]<0 && -a[c][d]==ans[l])
                    {
                        if(b[c]!=1)
                        {
                            //printf("baal b[%d] %d : ",c,ans[l]);
                            b[c]--;
                            //printf("%d\n",b[c]);
                        }
                    }
                }
            }
            //printf("dec %d %d\n",b[c],-mincnt);
            if(b[c]==0 && mincnt!=0)
                b[c]=1;
            else if(b[c]>-mincnt && b[c]<0)
                b[c]=1;
            //printf("dec2 %d\n",b[c]);
        }

        flag=0;
        for(c=0;c<n;c++)
        {
            if(b[c]!=1)
                flag=1;
        }
        if(flag==1)
            printf("Case %d: No\n",i);
        else
            printf("Case %d: Yes\n",i);
    }
    return 0;
}
