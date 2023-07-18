#include<stdio.h>
#include<string.h>
int main()
{
    int r,i,j,k,l,wr,cor,flag,off;
    while(scanf("%d",&r)!=EOF)
    {
        if(r==-1){break;}
        wr=0; cor=0; off=0;
        char w[1000],g[1000];
        getchar();
        gets(w);
        i=strlen(w);
        gets(g);
        j=strlen(g);
        for(k=0;k<j-1;k++)
        {
            for(l=k+1;l<j;l++)
            {
                if(g[k]==g[l])
                {
                    g[l]=35;
                }
            }
        }
        for(k=0;k<j;k++)
        {
            flag=0;
            for(l=0;l<i;l++)
            {
                if(g[k]==w[l])
                {
                    w[l]=42;
                    flag=1;
                    cor++;
                    if(cor==i && off==0){off=1;}
                }
            }
            if(flag==0 && g[k]!=35)
            {
                wr++;
                if(wr>=7 && off==0){off=2;}
            }
        }
        if(off==1){printf("Round %d\nYou win.\n",r);}
        else if(off==2){printf("Round %d\nYou lose.\n",r);}
        else{printf("Round %d\nYou chickened out.\n",r);}
    }
    return 0;
}
