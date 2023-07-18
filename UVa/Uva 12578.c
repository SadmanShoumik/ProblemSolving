#include<stdio.h>
#include<math.h>
#define PI acos(-1)

int main()

{
    int l,t,i;
    double w,r,ag,ar;

    scanf("%d",&t);

    if(t<=100){

    for(i=1;i<=t;i++){

        scanf("%d",&l);

    if(l<=1000 && l>=0){
                w=6.0*l/10.0;
                r=l/5.0;
                ar=PI*r*r*1.0;
                ag=l*w*1.0-ar;
                printf("%0.2lf %0.2lf\n",ar,ag);
            }

            else{
                printf("Invalid\n");
            }
    }
    }

    else{
        printf("Invalid\n");
    }

    return 0;
}
