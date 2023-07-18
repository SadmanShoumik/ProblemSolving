#include<stdio.h>
#include<string.h>
char b[]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
int main()
{
    char a[1000];
    while(gets(a))
    {
    int i,j,len;
    len=strlen(a);
    for(i=0;i<+len;i++)
    {
        for(j=0;j<47;j++)
        {
            if(a[i]==b[j])
            {
                a[i]=b[j-1];
            }
        }
    }
    printf("%s\n",a);
    }
    return 0;
}
