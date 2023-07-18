#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,b,c,d,t,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        char cur[100],a[n][100];
        int min[n],curmin,dur[n],kom;
        getchar();
        gets(cur);
        curmin=(cur[4]-48)+(cur[3]-48)*10;
        d=(cur[0]-48)*10+(cur[1]-48); d=d*60; curmin=curmin+d;
        kom=60*24*100;
        for(j=0;j<n;j++)
        {
            for(b=0;b<5;b++)
            {
                scanf("%c",&a[j][b]);
            }
            scanf("%d",&dur[j]);
            getchar();
            min[j]=(a[j][4]-48)+(a[j][3]-48)*10;
            d=(a[j][0]-48)*10+(a[j][1]-48); d=d*60; min[j]=min[j]+d;
            if(min[j]<curmin)
            {
                min[j]=min[j]+1440;
            }
            min[j]=min[j]+dur[j];
            if(min[j]-curmin<kom)
                kom=min[j]-curmin;
        }
        printf("Case %d: %d\n",i,kom);

    }
    return 0;
}
