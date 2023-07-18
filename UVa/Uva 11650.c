#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t,h,m;
    char time[5];
    int time2[5];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%c",&time[j]);
        }
        getchar();
        h=0; m=0;
        for(j=0,k=3;j<2,k<5;j++,k++)
        {
            time2[j]=time[j]-48;
            time2[k]=time[k]-48;
            h=(h*10)+time2[j];
            m=(m*10)+time2[k];
        }
        if(m!=0){m=60-m; h=h+1;}
        if(h!=12){h=12-h;}
        if(h<0){h=12+h;}
        if(h<10 && m<10)
            printf("0%d:0%d\n",h,m);
        else if(h<10 || m<10)
        {
            if(h<10)
                printf("0%d:%d\n",h,m);
            else
                printf("%d:0%d\n",h,m);
        }
        else
            printf("%d:%d\n",h,m);
    }
    return 0;
}
