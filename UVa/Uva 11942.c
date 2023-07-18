#include<stdio.h>

int main()

{
    int n,i,j,k,m,flaga,flagd;
    while(scanf("%d",&n)!=EOF){

            printf("Lumberjacks:\n");

        for(i=0;i<n;i++){

            flaga=0;
            flagd=0;

            int l[10];

            for(j=0;j<10;j++){
                scanf("%d",&l[j]);
            }

            for(k=0;k<9;k++){
                while(l[k]<l[k+1]){flaga++;break;}
                while(l[k]>l[k+1]){flagd++;break;}
            }

            if(flaga==9){printf("Ordered\n");}
            else if(flagd==9){printf("Ordered\n");}
            else{printf("Unordered\n");}

        }
    }

    return 0;
}
