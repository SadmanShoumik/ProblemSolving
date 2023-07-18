#include<stdio.h>
int quad(int a,int b,int c,int l)
{
    int res;
    res=(a*l*l)+(b*l)+c;
    return res;
}

int main()
{
    int a,b,c,d,l,i,value,count;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)!=EOF)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0){break;}
        count=0;
        for(i=0;i<=l;i++)
        {
            value=quad(a,b,c,i);
            if(value%d==0)
            {
               count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
