#include<stdio.h>
int main()
{
    int n,nrem,i,sum,rem;
    while(scanf("%d",&n)!=EOF){
    	sum=n;
    	rem=n/3;
        while(n!=1)
        {
            nrem=n-(rem*3);
            n=nrem+rem;
            if(n==2){n++;}
            sum=sum+rem;
            rem=n/3;
        }
        printf("%d\n",sum);
    }
    return 0;
}
