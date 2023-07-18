#include<stdio.h>

int main()
{
    int r,n,i;
    i=1;
    while(scanf("%d %d",&r,&n)!=EOF)
    {
        double dif;
        int diff;
        dif=(1.0*r)/n;
        diff=dif;
        if(r==0 && n==0)
            break;

        if(dif<27)
        {
            if(dif==diff)
            {
                printf("Case %d: %d\n",i,diff-1);
            }
            else if(dif>diff)
            {
                printf("Case %d: %d\n",i,diff);
            }
        }
        else if(dif>=27)
            printf("Case %d: impossible\n",i);
        i++;
    }
    return 0;
}
