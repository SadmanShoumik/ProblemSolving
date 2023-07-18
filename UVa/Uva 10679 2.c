#include<stdio.h>
#include<string.h>

int main()
{
    long long int t,n,i,j,k,l,len1,len2;
    scanf("%lld",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        char a[100100],b[100100],*ret;
        scanf("%s",&a);
        scanf("%lld",&n);
        for(j=0;j<n;j++)
        {
            len2=0;
            scanf("%s",&b);
            ret=strstr(a,b);
            len1=strlen(b);
            if(ret!='\0')
            {
                len2=strlen(ret);

            }

            if(len2>=len1)
                printf("y\n");
            if(len2<len1 || ret=='\0')
                printf("n\n");
        }
    }
    return 0;
}
