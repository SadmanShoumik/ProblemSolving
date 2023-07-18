#include<stdio.h>
int main()
{
    int i,j,t,wife[2],office[2],flag,w[11],o[11];
    char wi[11],of[11];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        flag=0;
        for(j=0;j<11;j++)
        {
            scanf("%c",&wi[j]);
            w[j]=wi[j]-48;
        }
        getchar();
        for(j=0;j<11;j++)
        {
            scanf("%c",&of[j]);
            o[j]=of[j]-48;
        }
        getchar();
        wife[0]=(((w[0]*10)+w[1])*60)+(w[3]*10)+w[4];
        wife[1]=(((w[6]*10)+w[7])*60)+(w[9]*10)+w[10];
        office[0]=(((o[0]*10)+o[1])*60)+(o[3]*10)+o[4];
        office[1]=(((o[6]*10)+o[7])*60)+(o[9]*10)+o[10];
        if(office[0]>=wife[0] && office[0]<=wife[1] || office[1]>=wife[0] && office[1]<=wife[1] || office[0]<=wife[0] && office[1]>=wife[0] || office[0]<=wife[1] && office[1]>=wife[1])
        {
            flag=1;
        }

        if(flag==0)
        {
            printf("Case %d: Hits Meeting\n",i);
        }
        else if(flag==1)
        {
            printf("Case %d: Mrs Meeting\n",i);
        }
    }
    return 0;
}
