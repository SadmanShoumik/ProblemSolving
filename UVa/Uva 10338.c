#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t,len;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        long long int r=1,z;
        char inp[t*20];
        scanf("%s",&inp);
        len=strlen(inp);
        long long int c[len],f[len];
        for(j=0;j<len;j++)
        {
            c[j]=1;
            f[j]=1;
        }
        for(j=0;j<len;j++)
        {
            for(k=j+1;k<len;k++)
            {
                if(inp[j]==inp[k])
                {
                    c[j]++;
                    inp[k]=k;
                }
            }
        }
        for(j=1;j<=len;j++)
        {
            r=r*j;
        }
        for(j=0;j<len;j++)
        {
            for(k=1;k<=c[j];k++)
            {
                f[j]=f[j]*k;
            }
        }
        for(j=0;j<len;j++)
        {
            if(f[j]!=0)
            {
                z=r/f[j];
                r=z;
            }
        }
        printf("Data set %d: %lld\n",i,z);
    }

    return 0;
}
