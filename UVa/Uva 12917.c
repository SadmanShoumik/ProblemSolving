#include<stdio.h>
int main()
{
    int p,h,o,ro;
    while(scanf("%d %d %d",&p,&h,&o)!=EOF)
    {
        ro=o-p;
        if(h<=ro)
        {
            printf("Props win!\n");
        }
        else if(h>ro)
        {
            printf("Hunters win!\n");
        }
    }
    return 0;
}
