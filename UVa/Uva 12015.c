#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,l,t;
    char web[10][100],ch;
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        int pop[10],max,k; max=0; ch=0;
        for(j=0;j<10;j++)
        {
           for(k=0;web[j][k-1]!=32;k++)
           {
               scanf("%c",&web[j][k]);
           }
           web[j][k-1]='\0';
           scanf("%d",&pop[j]);
           getchar();
           if(pop[j]>max)
           {
               max=pop[j];
           }
        }
        printf("Case #%d:\n",i+1);
        for(j=0;j<10;j++)
        {
            if(pop[j]==max)
            {
                printf("%s\n",web[j]);
            }
        }
    }
    return 0;
}
