#include<stdio.h>
int main()
{
    int a[3],b[3],c[3],ab,bb,cb,i,sum,an,bn,cn;
    while(scanf("%d %d %d %d %d %d %d %d %d",&a[0],&b[0],&c[0],&a[1],&b[1],&c[1],&a[2],&b[2],&c[2])!=EOF)
    {
        for(i=0;i<1;i++)
        {
            if(a[0]>a[1] && a[0]>a[2]){ab=a[0];an=0;}
            else if(a[1]>a[0] && a[1]>a[2]){ab=a[1];an=1;}
            else if(a[2]>a[1] && a[2]>a[0]){ab=a[2];an=2;}
            if(b[0]>b[1] && b[0]>b[2]){bb=b[0];bn=0;}
            else if(b[1]>b[0] && b[1]>b[2]){bb=b[1];bn=1;}
            else if(b[2]>b[1] && b[2]>b[0]){bb=b[2];bn=2;}
            if(c[0]>c[1] && c[0]>c[2]){cb=c[0];cn=0;}
            else if(c[1]>c[0] && c[1]>c[2]){cb=c[1];cn=1;}
            else if(c[2]>c[1] && c[2]>c[0]){cb=c[2];cn=2;}

            if(ab>bb && ab>cb)
            {
                sum=a[0]+a[1]+a[2]-a[an];
                for(i=0;i<3,i!=an;i++)
                {

                }
            }
            else if(bb>ab && bb>cb)
            {
                sum=b[0]+b[1]+b[2]-bb;
            }
            else if(cb>bb && cb>ab)
            {
                sum=c[0]+c[1]+c[2]-cb;
            }
        }
    }

    return 0;
}
