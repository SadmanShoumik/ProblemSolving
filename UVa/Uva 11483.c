#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t,n,len,count=1;
    while(scanf("%d",&t)!=EOF)
    {
        int flag=0;
        getchar();
        char sen[t][105];
        char br='n';
        char sl='\\"';
        if(t==0){return 0;}
        for(i=0;i<t;i++)
        {
            gets(sen[i]);
        }
        printf("Case %d:\n",count);
        printf("#include<string.h>\n");
        printf("#include<stdio.h>\n");
        printf("int main()\n");
        printf("{\n");
        for(i=0;i<t;i++)
        {
            printf("printf(\"");
            len=strlen(sen[i]);
            for(j=0;j<len;j++)
            {
                if(sen[i][j]=='\\' || sen[i][j]=='\"')
					printf("\\");
				printf("%c",sen[i][j]);
            }
            printf("\\%c\"\);",br);
            printf("\n");
        }
        printf("\printf(\"\\%c\");\n",br);
        printf("return 0;\n");
        printf("}\n");
        count++;
    }

    return 0;
}
