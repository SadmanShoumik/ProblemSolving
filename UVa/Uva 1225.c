#include<stdio.h>
int main()
{
    int i,j,t,n,mod,tes,a[10];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);

        for(j=0;j<10;j++)
        {
            a[j]=0;
        }

        for(j=1;j<=n;j++)
        {
            tes=j;
            while(tes>=1)
            {
                if(tes%10==0){a[0]++;}
                if(tes%10==1){a[1]++;}
                if(tes%10==2){a[2]++;}
                if(tes%10==3){a[3]++;}
                if(tes%10==4){a[4]++;}
                if(tes%10==5){a[5]++;}
                if(tes%10==6){a[6]++;}
                if(tes%10==7){a[7]++;}
                if(tes%10==8){a[8]++;}
                if(tes%10==9){a[9]++;}
                tes=tes/10;
            }
        }

        printf("%d %d %d %d %d %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
    }
    return 0;
}
