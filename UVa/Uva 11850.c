#include<stdio.h>
int main()
{
    int i,j,n,flag,temp;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0){break;}
        flag=0;
        int st[n+1],sta[n+1];
        st[n]=1422;
        sta[n]=1422;
        for(i=0;i<n;i++)
        {
            scanf("%d",&st[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(st[i]>st[j])
                {
                    temp=st[j];
                    st[j]=st[i];
                    st[i]=temp;
                }
            }
        }
        for(i=n-1,j=0;i>=0;i--,j++)
        {
            sta[j]=st[i];
        }
        for(i=0;i<n;i++)
        {
            if(i==n-1)
            {
                if(sta[i+1]-sta[i]>100)
                {
                    flag++;
                }
            }
            else if(sta[i+1]-sta[i]>=201)
            {
                flag++;
            }
        }
        if(flag>0)
        {
            printf("IMPOSSIBLE\n");
        }
        else if(flag==0)
        {
            printf("POSSIBLE\n");
        }
    }
    return 0;
}
