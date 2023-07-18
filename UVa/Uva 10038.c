#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,count;
    while(scanf("%d",&n)!=EOF)
    {
        int num[n],diff[n-1],diff2[n-1];
        for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
        count=0;
        for(i=0;i<n-1;i++)
        {
            diff[i]=abs(num[i+1]-num[i]);
            diff2[i]=i+1;
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(diff[i]==diff2[j])
                    {
                        diff2[j]=0;
                        count++;
                    }
            }
        }
        if(count==n-1)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }
    return 0;
}
