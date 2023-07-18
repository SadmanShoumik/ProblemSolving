#include<stdio.h>
int main()
{
    int k,i,x,y,a,b;
    while(scanf("%d",&k)!=EOF)
    {
        if(k==0){break;}
        scanf("%d %d",&x,&y);
        for(i=0;i<k;i++)
        {
            scanf("%d %d",&a,&b);
            if(a==x || b==y)
            {
                printf("divisa\n");
            }
            else if(a>x && b>y)
            {
                printf("NE\n");
            }
            else if(a<x && b<y)
            {
                printf("SO\n");
            }
            else if(a<x && b>y)
            {
                printf("NO\n");
            }
            else if(a>x && b<y)
            {
                printf("SE\n");
            }
        }
    }
    return 0;
}
