#include<stdio.h>
int main()

{
        int n,m,summ,nrem,i,sum,rem;

        while(scanf("%d",&n)!=EOF)
        {
            if(n==0){break;}

            m=n;
            sum=n;
            rem=n/3;

            while(1)
            {
                nrem=n-(rem*3);
                n=nrem+rem;
                if(n==2){n++;}
                sum=sum+rem;
                rem=n/3;
                if(n==1){break;}
            }
            summ=sum-m;

            printf("%d\n",summ);
        }

    return 0;

}
