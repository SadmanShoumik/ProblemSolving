#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            int a,b,teka,ateka;
            scanf("%d %d %d",&a,&b,&teka);

            ateka=teka*(2*a-b)/(a+b);
            if(ateka>=teka){ateka=teka;};
            printf("%d\n",ateka);
        }
    }
    return 0;
}
