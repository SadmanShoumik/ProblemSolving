#include<stdio.h>
#include<string.h>
int main()
{
    int len,i=0,j,in[10000],count[10000];
    while()
    {
        scanf("%d",&in[i]);
        i++;
    }
        for(i=0;i<len;i++)
        {
            count[i]=1;
            for(j=i+1;j<len;j++)
            {
                if(in[i]==in[j])
                {
                    count[i]++;
                    in[j]=48;
                }
            }
        }
        for(i=0;i<len;i++)
        {
            if(in[i]!=48)
            {
                printf("%d %d\n",in[i],count[i]);
            }
        }
    return 0;
}
