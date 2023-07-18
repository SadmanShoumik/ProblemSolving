#include<stdio.h>

int main()

{
    int m,n,count,temp;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        if(m==-1 && n==-1){break;}
        count=0;
        temp=0;

        if(n>m)
        {
            if(n-m<50)
            {
                count=n-m;
                printf("%d\n",count);
            }

            else
            {
                count=m+(99-n)+1;
                printf("%d\n",count);
            }

        }

        else if(n<m)
        {
            temp=n;
            n=m;
            m=temp;

            if(n-m<50)
            {
                count=n-m;
                printf("%d\n",count);
            }

            else
            {
                count=m+(99-n)+1;
                printf("%d\n",count);
            }
        }

        else if(n==m)
        {
            printf("%d\n",count);
        }

    }

    return 0;
}
