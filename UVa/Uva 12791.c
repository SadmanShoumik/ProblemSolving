#include<stdio.h>
int main()
{
    long int i,x,y;
    while(scanf("%ld %ld",&x,&y)!=EOF)
    {
        i=0;
        while(i*y<(i+1)*x)
        {
            i++;
        }
        i=i+1;
        printf("%d\n",i);
    }
    return 0;
}
