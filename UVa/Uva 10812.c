#include<stdio.h>
int main()
{
    long int i,j,s,d,t,r1,r2,flag;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&s,&d);
        flag=0;
        if(d>s){printf("impossible\n");}
        else if(s>=d)
        {
            for(j=0;j<=s;j++)
            {
                if(s-(2*j)==d && flag==0)
                {
                    r2=j;
                    r1=s-r2;
                    flag=1;
                }
            }
            if(flag==1)
                printf("%ld %ld\n",r1,r2);
            else
                printf("impossible\n");
        }
    }
    return 0;
}
