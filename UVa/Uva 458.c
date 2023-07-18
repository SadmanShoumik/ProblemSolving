#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char sen[10000];
    while(gets(sen))
    {
        len=strlen(sen);
        for(i=0;i<len;i++)
        {
            sen[i]=sen[i]-7;
        }
        printf("%s\n",sen);
    }
    return 0;
}
