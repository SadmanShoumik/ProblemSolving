#include<stdio.h>
int main()
{
    int i,j,t,n,park,res;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int shop[20],max=0,low=100;
        for(j=0;j<n;j++)
        {
            scanf("%d",&shop[j]);
            if(shop[j]>max){max=shop[j];}
            if(shop[j]<low){low=shop[j];}
        }
        printf("%d\n",(max-low)*2);
    }
    return 0;
}
