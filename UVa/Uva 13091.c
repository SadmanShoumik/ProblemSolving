#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,l,m,flag;
    scanf("%d",&n);
    getchar();
    char pit[100][100];
    for(k=1;k<=n;k++)
    {
        flag=0;
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                scanf("%c",&pit[i][j]);
                if(j==4)
                    getchar();
                if(pit[i][j]=='>')
                {
                    for(m=0;m<j;m++)
                    {
                        if(pit[i][m]=='|')
                            flag=1;
                    }
                    if(flag==0)
                        flag=2;
                }
                else if(pit[i][j]=='<')
                {
                    for(m=0;m<j;m++)
                    {
                        if(pit[i][m]=='|')
                            flag=2;
                    }
                    if(flag==0)
                        flag=1;
                }
            }
        }
        getchar();
        if(flag==1)
            printf("Case %d: No Ball\n",k);
        else if(flag==2)
            printf("Case %d: Thik Ball\n",k);
    }
    return 0;
}
