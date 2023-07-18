#include<stdio.h>
int main()

{
    int n,nrem,k,i,sum,rem;

    while(scanf("%d %d",&n,&k)!=EOF){
    	
    	sum=n;
    	rem=n/k;

            while(rem>=1){
            	
                    nrem=n-(rem*k);
                    n=nrem+rem;
                    sum=sum+rem;
                    rem=n/k;
            }

        printf("%d\n",sum);
    }

    return 0;
    
}
