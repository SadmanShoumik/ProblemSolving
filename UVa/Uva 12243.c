#include<stdio.h>
#include<string.h>

int main()
{
    int flag,i,len;
    char sen[1000];
    while(gets(sen))
    {
        len=strlen(sen);
        if(sen[0]=='*' && len==1)
            break;
        for(i=0;i<len;i++)
        {
            if(sen[i]>=65 && sen[i]<=90)
            {
                sen[i]=sen[i]+32;
            }
            flag=0;
        }
        for(i=1;i<len-1;i++)
        {
            if(sen[i]==' ' && sen[i+1]!=sen[0])
                flag=1;
        }
        if(flag==1)
            printf("N\n");
        else if(flag==0)
            printf("Y\n");
    }
    return 0;
}
