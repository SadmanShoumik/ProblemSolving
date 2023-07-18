#include<stdio.h>

int main()

{
    int a,b,c,d,i,j,m,n;

    while(scanf("%d %d",&a,&b)!=EOF)
    {
        long long int count[100000];
        int pcount=0;

        while(a>=b){n=a; m=b; break;}
        while(a<b){m=a; n=b; break;}

        for(i=m;i<=n;i++)
        {
            pcount=0;

            for(j=i;j>1;)
            {
                if(j%2!=0)
                {
                j=3*j+1;
                }

                else
                {
                j=j/2;
                }

                pcount++;
            }

            count[i]=pcount;
        }

        int max=count[m];

        for(i=m;i<n;i++)
        {
            if(count[i]>count[i+1] && count[i]>=max)
            {
                max=count[i];
                count[i]=count[i+1];
                count[i+1]=max;
            }

            else if(count[i]<count[i+1] && count[i+1]>=max)
            {
                max=count[i+1];
                count[i+1]=count[i];
                count[i]=max;
            }
        }

        max=max+1;

        printf("%d %d %d\n",a,b,max);
    }

    return 0;
}
