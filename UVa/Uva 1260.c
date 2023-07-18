#include<stdio.h>
int main()
{
    int i,j,k,l,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n],b=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=1;j<n;j++)
        {
            for(k=0;k<j;k++)
            {
                if(a[k]<=a[j])
                {
                    b=b+1;
                }
            }
        }
        printf("%d\n",b);
    }
    return 0;
}
