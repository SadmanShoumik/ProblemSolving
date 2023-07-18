#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0){break;}
        getchar();
        char mech[n][25];
        int xm=0,x[n],res=0;
        for(i=0;i<n;i++)
        {
            x[i]=0;
            gets(mech[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<25;j++)
            {
                if(mech[i][j]==88)
                {
                    x[i]++;
                }
            }
            if(x[i]>xm){xm=x[i];}
        }
        for(i=0;i<n;i++)
        {
            res=res+xm-x[i];
        }
        printf("%d\n",res);
    }
    return 0;
}
