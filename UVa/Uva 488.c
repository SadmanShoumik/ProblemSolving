#include<stdio.h>
int main()
{
    int i,j,k,l,am,fr,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d\n%d",&am,&fr);
        for(j=0;j<fr;j++)
        {
            for(k=1;k<=am;k++)
            {
                for(l=1;l<=k;l++)
                {
                    printf("%d",k);
                }
                printf("\n");
            }
            for(k=am-1;k>0;k--)
            {
                for(l=k;l>0;l--)
                {
                    printf("%d",k);
                }
                printf("\n");
            }
            if(j!=fr-1)
                printf("\n");
        }
        if(i!=t-1)
            printf("\n");
    }
    return 0;
}
