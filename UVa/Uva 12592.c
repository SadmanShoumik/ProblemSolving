#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t,n,len,count;
    scanf("%d",&t);
    getchar();
    char slo[t][10000],slo2[t][10000];
    for(i=0;i<t;i++)
    {
        gets(slo[i]);

        gets(slo2[i]);
    }
    scanf("%d",&n);
    getchar();
    char slo3[n][10000];
    for(i=0;i<n;i++)
    {
        gets(slo3[i]);
        len=strlen(slo3[i]);
        for(j=0;j<t;j++)
        {
            if(strcmp(slo3[i],slo[j])==0)
            {
                printf("%s\n",slo2[j]);
            }
        }
    }
    return 0;
}
