#include<bits/stdc++.h>

using namespace std;

int bin[256][8];

int main()
{
    int i,j,k,l,mod,t,n;
    char m;
    scanf("%d",&t);

    for(i=0;i<256;i++)
    {
        k=i; j=0;
        while(k>=1)
        {
            mod=k%2;
            bin[i][j++]=mod;
            k=k/2;
        }
    }

    for(i=0;i<t;i++)
    {
        int b[4],flag=0;
        char c[4],d[35];
        k=3; l=0;
        scanf("%d %c %d %c %d %c %d",&b[0],&c[0],&b[1],&c[1],&b[2],&c[2],&b[3]);
        scanf("%s",&d);
        for(j=34;j>=0 && flag==0;j--)
        {
            if(j==8 || j==17 || j==26)
            {
                l=0; k--; j--;
            }
            if(bin[b[k]][l]==0)
                m='0';
            else
                m='1';
            if(d[j]!=m)
                flag=1;
            l++;
        }
        if(flag==0)
            printf("Case %d: Yes\n",i+1);
        else if(flag==1)
            printf("Case %d: No\n",i+1);
    }
    return 0;
}
