#include<stdio.h>
int main()
{
    int n,q,i,j,flag,res,count=0,temp;
    while(scanf("%d %d",&n,&q)!=EOF)
    {
        count++;
        flag=0;
        int que[q],mar[n];
        if(n==0 && q==0){break;}
        for(i=0;i<n;i++)
        {
            scanf("%d",&mar[i]);
        }
        for(i=0;i<q;i++)
        {
            scanf("%d",&que[i]);
        }
        printf("CASE# %d:\n",count);
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if(mar[i]>mar[j])
                {
                    temp=mar[i];
                    mar[i]=mar[j];
                    mar[j]=temp;
                }

            }
        }
        for(i=0;i<q;i++)
        {
            flag=0;
            for(j=0;j<n;j++)
            {
                if(que[i]==mar[j] && flag==0)
                {
                    res=j+1;
                    flag=1;
                }
            }
            if(flag==1)
            {
                printf("%d found at %d\n",que[i],res);
            }
            else
                printf("%d not found\n",que[i]);
        }
    }
    return 0;
}
