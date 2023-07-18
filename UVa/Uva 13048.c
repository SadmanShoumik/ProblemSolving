#include<stdio.h>
#include<string.h>
int main()
{
    int t,len,lent,i,j,count;
    t=0;
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        char s[t][1000];
        count=0;
        gets(s[i]);
        lent=strlen(s[i]);
        for(j=0;j<lent;j++)
        {
            if(s[i][j]!='-')
            {
                if(s[i][j]=='B' && j>=1 && s[i][j-1]=='-')
                {
                    s[i][j-1]='*';
                }
                if(s[i][j]=='B' && j>=2 && s[i][j-2]=='-')
                {
                    s[i][j-2]='*';
                }
                if(s[i][j]=='S' && j>=1 && s[i][j-1]=='-')
                {
                    s[i][j-1]='*';
                }
                if(s[i][j]=='S' && j<lent-1 && s[i][j+1]=='-')
                {
                    s[i][j+1]='*';
                }
                if(s[i][j]=='D')
                {
                    s[i][j]='*';
                }
                s[i][j]='*';
            }
        }
        for(len=0;len<lent;len++)
        {
            if(s[i][len]!='*')
                count++;
        }
        printf("Case %d: %d\n",i+1,count);
    }
    return 0;
}
