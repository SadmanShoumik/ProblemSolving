#include<stdio.h>

int main()

{
    int a,b,t,i,x,y;

    scanf("%d",&t);

    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        x=0;

        for(;b>=a;){
            if(b%2!=0){
            x=x+b;
            b=b-2;
        }

        else if(b%2==0){
            b=b-1;
            x=x+b;
            b=b-2;
        }
        }


        printf("Case %d: %d\n",i,x);
    }

    return 0;
}
