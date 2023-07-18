#include<stdio.h>
int main()
{
    int i,j,n,r,flag;
    while(scanf("%d %d",&n,&r)!=EOF)
    {
        flag=0;
        int v[n],re[r];
        for(i=0;i<n;i++)
        {
            v[i]=i+1;
        }
        for(i=0;i<r;i++)
        {
            scanf("%d",&re[i]);
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<n;j++)
            {
                if(re[i]==v[j])
                {
                    v[j]=0;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(v[i]!=0)
            {
                printf("%d ",v[i]);
                flag++;
            }
            else if(flag==0 && i==n-1)
            {
                printf("*");
            }
            if(i==n-1){printf("\n");}
        }
    }
    return 0;
}
