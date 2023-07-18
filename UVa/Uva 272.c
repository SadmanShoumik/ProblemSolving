#include<stdio.h>
#include<string.h>
int main()
{
    char sen[10000];
    int len,i,j,flag,temp;
    flag=0;
    while(gets(sen))
    {
        len=strlen(sen);
        for(i=0;i<len;i++)
        {
            if(flag%2==0 && sen[i]=='"')
            {
                flag++;
                printf("``");
            }
            else if(flag%2!=0 && sen[i]=='"')
            {
                flag++;
                printf("''");
            }
            else
            {
                printf("%c",sen[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
