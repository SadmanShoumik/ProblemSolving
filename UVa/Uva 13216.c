#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        long long int j,k,l,ans;
        char n[10000];
        gets(n);
        k=strlen(n);
        if(n[k-1]=='0')
        {
            if(n[k-1]=='0' && k!=1)
                printf("76\n");
            if(n[k-1]=='0' && k==1)
                printf("1\n");
        }
        if(n[k-1]=='5')
            printf("76\n");
        if(n[k-1]=='1')
        {
            if(k!=1)
                printf("16\n");
            if(k==1)
                printf("66\n");
        }
        if(n[k-1]=='6')
            printf("16\n");
        if(n[k-1]=='3' || n[k-1]=='8')
            printf("96\n");
        if(n[k-1]=='2' || n[k-1]=='7')
            printf("56\n");
        if(n[k-1]=='4' || n[k-1]=='9')
            printf("36\n");
    }
    return 0;
}
