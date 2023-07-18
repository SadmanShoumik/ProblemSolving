#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,len;
    char sen[10000];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        while(gets(sen))
        {
            len=strlen(sen);
            for(j=0;j<len;j++)
            {
                if(sen[j]==48){sen[j]=79;}
                else if(sen[j]==49){sen[j]=73;}
                else if(sen[j]==50){sen[j]=90;}
                else if(sen[j]==51){sen[j]=69;}
                else if(sen[j]==52){sen[j]=65;}
                else if(sen[j]==53){sen[j]=83;}
                else if(sen[j]==54){sen[j]=71;}
                else if(sen[j]==55){sen[j]=84;}
                else if(sen[j]==56){sen[j]=66;}
                else if(sen[j]==57){sen[j]=80;}
            }
            printf("%s\n",sen);
        }
    }
    return 0;
}
