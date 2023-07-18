#include<stdio.h>
#include<string.h>
int main()
{
    int count,i,j,k,len,len1,len2;
    char sen[1000000];
    while(gets(sen))
    {
        k=0;
        len=strlen(sen);
        for(i=0;sen[i]!=' ';i++)
        {
        }
        len1=i;
        len2=len-len1-1;
        for(i=(len1+1);i<len;i++)
        {
            if(sen[i]==sen[k])
            {
                k++;
            }
        }
        if(k==len1)
            printf("Yes\n");
        else if(len1!=k)
            printf("No\n");
    }
    return 0;
}
