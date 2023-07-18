#include<stdio.h>

int main()
{
    int t,i,j,k,h,l,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        h=0; l=0;
        scanf("%d",&p);
        int pil[p];
        scanf("%d",&pil[0]);
        for(j=1;j<p;j++)
        {
            scanf("%d",&pil[j]);
            if(pil[j]>pil[j-1])
                h++;
            else if(pil[j]<pil[j-1])
                l++;
        }
        printf("Case %d: %d %d\n",i,h,l);
    }
    return 0;
}
