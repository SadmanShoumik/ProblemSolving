#include<stdio.h>

int main()

{
    int a,b,t,i;

    scanf("%d",&t);

    if(t<15){
    for(i=0;i<t;i++){

        scanf("%d %d",&a,&b);

        if(a>b){
            printf(">\n");
        }
        if(a<b){
            printf("<\n");
        }
        else if(a==b){
            printf("=\n");
        }

    }
    }
    else{
        printf("Invalid");
    }

    return 0;
}
