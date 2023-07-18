#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        char a[10000];
        gets(a);
        int m,f,j,len;
        len=strlen(a);
        m=0; f=0;
        for(j=0;j<len;j++)
        {
            if(a[j]=='M')
            {
                m++;
            }
            else if(a[j]=='F')
            {
                f++;
            }
        }
        if(m==f && m>1 && f>1)
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }
    return 0;
}
