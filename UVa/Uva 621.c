#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,len;
    scanf("%d",&n);
    getchar();
    char a[n][1000];
    for(i=0;i<n;i++)
    {
        gets(a[i]);
        len=strlen(a[i]);
        if(strcmp(a[i],"1")==0 || strcmp(a[i],"4")==0 || strcmp(a[i],"78")==0)
            printf("+\n");
        else if(a[i][len-1]==53 && a[i][len-2]==51)
            printf("-\n");
        else if(a[i][0]==57 && a[i][len-1]==52)
            printf("*\n");
        else if(a[i][0]==49 && a[i][1]==57 && a[i][2]==48 || (a[i][len-1]=='4' || a[i][len-1]=='1' || a[i][len-1]=='8'))
            printf("?\n");
        else
            printf("+\n");
    }
    return 0;
}
