#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    while(gets(a))
    {
        printf("%s\n",a);
    }
    return 0;
}
