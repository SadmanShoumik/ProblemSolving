#include<stdio.h>
int main()
{
    int n,i,m,k,j,minmi,minju,mile,juice,save;
    while(scanf("%d",&k)!=EOF)
    {
        i=0;
        for(m=0; m<k; m++)
        {
            i++;
                scanf("%d",&n);
                int min[n];
                minmi=0; minju=0;
                mile=0;
                juice=0;
                for(j=0; j<n; j++)
                {
                    scanf("%d",&min[j]);
                    minmi=min[j]+1;
                    minju=min[j]+1;

                    for(; minmi>0;)
                    {
                        minmi=minmi-30;
                        mile+=10;
                    }
                    for(; minju>0;)
                    {
                        minju=minju-60;
                        juice+=15;
                    }
                }
                if(juice<mile)
                {
                    printf("Case %d: Juice %d\n",i,juice);
                }
                else if(juice>mile)
                {
                    printf("Case %d: Mile %d\n",i,mile);
                }
                else if(juice==mile)
                {
                    printf("Case %d: Mile Juice %d\n",i,juice);
                }

        }
    }

    return 0;
}
