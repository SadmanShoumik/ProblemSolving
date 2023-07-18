#include<stdio.h>
int main()
{
    int t,i,n,res,one,ten;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        res=315*n+36962;
        if(res<0){res=res*(-1);}
        one=res/10;
        ten=one%10;
        printf("%d\n",ten);
    }
    return 0;
}
