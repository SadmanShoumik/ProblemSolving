#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k,l,m,n,a,b,c,chor,bechara,sum,avg,flag;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0; flag=0;
        scanf("%d",&n);
        getchar();
        int area[n];
        char name[n][100];

        for(j=0;j<n;j++)
            for(k=0;k<100;k++)
                name[j][k]='\0';

        for(j=0;j<n;j++)
        {
            scanf("%s %d %d %d",&name[j],&a,&b,&c);
            area[j]=a*b*c;
            sum+=area[j];
        }
        avg=sum/n;
        for(j=0;j<n;j++)
        {
            if(area[j]<avg)
                bechara=j;
            else if(area[j]>avg)
            {
                chor=j; flag=1;
            }
        }
        if(flag==0)
        {
            printf("Case %d: no thief\n",i);
        }
        else if(flag==1)
        {
            printf("Case %d: %s took chocolate from %s\n",i,name[chor],name[bechara]);
        }
    }

    return 0;
}
