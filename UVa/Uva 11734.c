#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    getchar();
    char a[n][100],b[n][100];
    for(i=1;i<=n;i++)
    {
        gets(a[i-1]);
        gets(b[i-1]);
        if(strcmp(a[i-1],b[i-1])==0)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            int len1,len2,count1,count2;
            count1=0; count2=0;
            len1=strlen(a[i-1]);
            len2=strlen(b[i-1]);
            for(j=0;j<len1;j++)
            {
                for(k=0;k<len2;k++)
                {
                    if(b[i-1][k]==a[i-1][j])
                    {
                        a[i-1][j]=0; b[i-1][k]=0;
                    }
                }
            }
            for(j=0;j<len1;j++)
            {
                if(a[i-1][j]==0 || a[i-1][j]==32)
                    count1++;
            }
            for(j=0;j<len2;j++)
            {
                if(b[i-1][j]==0 || b[i-1][j]==32)
                    count2++;
            }
            if(count1==len1 && count2==len2)
                 printf("Case %d: Output Format Error\n",i);
            else
                 printf("Case %d: Wrong Answer\n",i);
        }
    }
    return 0;
}
