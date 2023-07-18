#include<stdio.h>
int main()
{
    int i,p1,p2,p3,p4,res;
    while(scanf("%d %d %d %d",&p1,&p2,&p3,&p4)!=EOF)
    {
        res=720; i=0;
        if(p4==0 && p1==0 && p2==0 && p3==0){break;}
        while(p1!=p2)
        {
            if(p1==0)
                p1=40;
            p1=p1-1;
            i++;
        }
        res=res+(i*9)+360; i=0;
        while(p2!=p3)
        {
            p2=p2+1;
            i++;
            if(p2==40)
                p2=0;
        }
        res=res+(i*9); i=0;
        while(p3!=p4)
        {
            if(p3==0)
                p3=40;
            p3=p3-1;
            i++;
        }
        res=res+(9*i);

        printf("%d\n",res);
    }
    return 0;
}
