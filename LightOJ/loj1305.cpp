#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k,l,ax,ay,bx,by,cx,cy,dx,dy,area,h;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy);
        dx=ax+cx-bx; dy=ay+cy-by;
        area=(ax*by)+(bx*cy)+(cx*ay)-(ay*bx)-(by*cx)-(cy*ax);
        if(area<0)
            area=-area;
        printf("Case %d: %d %d %d\n",i,dx,dy,area);
    }
    return 0;
}
