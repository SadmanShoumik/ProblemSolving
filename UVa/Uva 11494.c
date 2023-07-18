#include<stdio.h>
int main()
{
    int dx,dy,x1,y1,x2,y2;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)!=EOF)
    {
        if(x1==0 && x2==0 && y1==0 && y2==0){break;}
        if(x1>=x2){dx=x1-x2;}
        else if(x2>x1){dx=x2-x1;}
        if(y1>=y2){dy=y1-y2;}
        else if(y2>y1){dy=y2-y1;}

        if(dx==dy && dx!=0){printf("1\n");}
        else if(dx==0 && dy==0){printf("0\n");}
        else if(x1==x2 && y1!=y2 || y1==y2 && x1!=x2){printf("1\n");}
        else{printf("2\n");}
    }
    return 0;
}
