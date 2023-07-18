#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=1;
    long long int m,n,o,p;
    while(a<=200)
    {
        m=a*a*a;
        for(b=2;b<=200;b++)
        {
            n=b*b*b;
            for(c=b;c<=200;c++)
            {
                o=c*c*c;
                for(d=c;d<=200;d++)
                {
                    p=d*d*d;
                    if(m==n+o+p)
                    {
                        printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
                    }
                }
            }
        }
        a++;
    }
    return 0;
}
