#include<stdio.h>

int main()

{
    int a,b,c,t,i,x;

    scanf("%d",&t);

    if(t<20){

        for(i=1;i<=t;i++){
            scanf("%d %d %d",&a,&b,&c);

            if(a>b){
                if(a>c){
                    if(b>c){
                        printf("Case %d: %d\n",i,b);
                    }
                    else{
                        printf("Case %d: %d\n",i,c);
                    }
                }
                else{
                    printf("Case %d: %d\n",i,a);
                }
            }

            else if(a<b){
                if(a<c){
                        if(b>c){
                            printf("Case %d: %d\n",i,c);
                        }
                        else{
                            printf("Case %d: %d\n",i,b);
                        }
                }
                else{
                    printf("Case %d: %d\n",i,a);
                }
            }

        }
    }

    else{
        printf("Invalid");
    }

    return 0;
}
