#include<stdio.h>
#include<string.h>

int main()
{
    int i,b; i=1;
    while(scanf("%d",&b)!=EOF)
    {
        if(b<0)
            break;
        int made[13],need[12],judge[12],j,k,l,store;
        made[0]=b;
        for(j=0;j<12;j++)
        {
            judge[j]=0;
        }
        for(j=1;j<13;j++)
        {
            scanf("%d",&made[j]);
        }
        for(j=0;j<12;j++)
        {
            scanf("%d",&need[j]);
        }
        store=made[0];
        for(j=0;j<12;j++)
        {
            if(store>=need[j])
            {
                judge[j]=1;
                store=store-need[j];
            }
            store=store+made[j+1];
        }
        printf("Case %d:\n",i);
        for(j=0;j<12;j++)
        {
            if(judge[j]==1)
            {
                printf("No problem! :D\n");
            }
            else if(judge[j]==0)
            {
                printf("No problem. :(\n");
            }
        }
        i++;
    }
    return 0;
}
