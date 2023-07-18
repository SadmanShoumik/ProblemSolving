#include<stdio.h>
int main()
{
    int t,i,j,k,flag;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        flag=1;
        int prb[t][13];
        for(j=0;j<13;j++)
        {
            scanf("%d",&prb[i][j]);
            if(prb[i][j]==0)
            {
                flag=0;
            }
        }
        if(flag==0)
            printf("Set #%d: No\n",i+1);
        else
            printf("Set #%d: Yes\n",i+1);
    }
    return 0;
}
