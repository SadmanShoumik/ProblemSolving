#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,n;
    int len1,len2,count1,count2;
    scanf("%d",&n);
    getchar();
    char a[n][100],b[n][100],c[n][100],d[n][100],ch;
    for(i=1;i<=n;i++)
    {
        gets(a[i-1]); gets(b[i-1]);
        if(strcmp(a[i-1],b[i-1])==0)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            count1=0; count2=0;
            len1=strlen(a[i-1]);
            len2=strlen(b[i-1]);
            k=0;
            for(j=0;j<len1;j++)
            {
                if(a[i-1][j]!=32)
                {
                    c[i-1][k]=a[i-1][j];
                    k++;
                }
            }
            c[i-1][k]='\0';
            k=0;
            for(j=0;j<len2;j++)
            {
                if(b[i-1][j]!=32)
                {
                    d[i-1][k]=b[i-1][j];
                    k++;
                }
            }
            d[i-1][k]='\0';
            if(strcmp(c[i-1],d[i-1])==0)
            {
                printf("Case %d: Output Format Error\n",i);
            }
            else
                printf("Case %d: Wrong Answer\n",i);
        }
    }
    return 0;
}
