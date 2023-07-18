#include<stdio.h>
#include<string.h>
int main()
{
    int req,pro,s,ans;
    s=1;
    while(scanf("%d %d",&req,&pro)!=EOF)
    {
        ans=0;
        if(req==0 && pro==0)
            break;
        if(s>1)
            printf("\n");
        getchar();
        int i,j,k,prop[pro],max;
        double pri,low;
        char requ[900],props[1000],name[pro][900];
        for(i=0;i<req;i++)
        {
            gets(requ);
        }
        max=0;
        for(j=0;j<pro;j++)
        {
            gets(name[j]);
            scanf("%lf %d",&pri,&prop[j]);
            getchar();
            for(i=0;i<prop[j];i++)
            {
                gets(props);
            }
            if(prop[j]>max)
            {
                max=prop[j];
                low=pri;
                ans=j;
            }
            else if(prop[j]!=0 && prop[j]==max)
            {
                if(pri<low)
                {
                    low=pri;
                    ans=j;
                }
            }
        }
        printf("RFP #%d\n%s\n",s,name[ans]);
        s++;
    }
    return 0;
}

