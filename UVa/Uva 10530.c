#include<stdio.h>
#include<string.h>
int main()
{
    int n,low,high,flag,brk,len;
    brk=0;
    char a[100];
    while(brk==0)
    {
        low=0; high=11; flag=0;
        while(flag==0)
        {
            scanf("%d",&n);
            if(n==0)
            {
                brk=1;
                break;
            }
            gets(a);
            len=strlen(a);
            if(len==7)
            {
                if(n>low)
                    low=n;
            }
            else if(len==8 && a[7]=='h')
            {
                if(n<high)
                    high=n;
            }
            else if(len==8 && a[7]=='n')
            {
                if(n>low && n<high)
                {
                    printf("Stan may be honest\n");
                }
                else
                {
                    printf("Stan is dishonest\n");
                }
                flag=1;
            }
        }
    }
    return 0;
}
