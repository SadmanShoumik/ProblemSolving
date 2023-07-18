#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,d,j,k,q;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        if(i>0)
        {
            printf("\n");
        }
        scanf("%d",&d);
        int l[d],h[d],flag,g;
        char name[d][20];
        for(j=0;j<d;j++)
        {
            scanf("%s",&name[j]);
            scanf("%d %d",&l[j],&h[j]);
        }
        scanf("%d",&q);
        int p[q];
        for(j=0;j<q;j++)
        {
            flag=0;
            scanf("%d",&p[j]);
            for(k=0;k<d;k++)
            {
                if(p[j]>=l[k] && p[j]<=h[k])
                {
                    flag++;
                    g=k;
                }
            }
            if(flag==0 || flag>1)
            {
                printf("UNDETERMINED\n");
            }
            else if(flag==1)
            {
                printf("%s\n",name[g]);
            }
        }
    }
    return 0;
}
