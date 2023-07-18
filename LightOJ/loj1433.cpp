#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k,l,ox,oy,ax,ay,bx,by;
    long double oa,ob,ab,ang,s,pi;
    pi=acos(-1);
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d %d %d",&ox,&oy,&ax,&ay,&bx,&by);

        oa=((ox-ax)*(ox-ax)) + ((oy-ay)*(oy-ay));
        oa=sqrt(oa);

        ob=((ox-bx)*(ox-bx)) + ((oy-by)*(oy-by));
        ob=sqrt(ob);

        ab=((bx-ax)*(bx-ax)) + ((by-ay)*(by-ay));
        ab=sqrt(ab);

        ang=(oa*oa)+(ob*ob)-(ab*ab);
        ang=ang/(2.0*oa*ob);
        ang=acos(ang);
        s=oa*ang;

        printf("Case %d: %0.8llf\n",i+1,s);
    }
    return 0;
}
