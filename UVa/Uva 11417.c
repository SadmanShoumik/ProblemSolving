#include<stdio.h>

int GCD(i,j)

{
    while(i!=j){
        if(i>j){
            i=i-j;
        }
        else{
            j=j-i;
        }
    }

    return i;
}

int main()

{
    int n,i,j;
    while(scanf("%d",&n)!=EOF){

            if(n==0){
                break;
            }

            int G=0;

            for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
            G=G+GCD(i,j);
        }
    }

    printf("%d\n",G);

    }

    return 0;
}
