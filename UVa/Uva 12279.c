#include<stdio.h>

int main()

{
    int j,n;
    j=0;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==0){break;}

        j++;

        int i,count,m[n];
        count=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&m[i]);
            if(m[i]==0)
            {
                count++;
            }
        }

        printf("Case %d: %d\n",j,n-2*count);

    }

    return 0;
}
