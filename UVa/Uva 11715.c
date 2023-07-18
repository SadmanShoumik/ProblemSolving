#include<stdio.h>
#include<math.h>

int main()

{
    int n;
    double u,v,t,s,a;
    int c=0;

    while(scanf("%d",&n)!=EOF){

            c++;

    if(n==1){
        scanf("%lf %lf %lf",&u,&v,&t);
        a=(v-u)/t;
        s=u*t+(a*t*t)/2;
        printf("Case %d: %0.3lf %0.3lf\n",c,s,a);
    }

    else if(n==2){
        scanf("%lf %lf %lf",&u,&v,&a);
        t=(v-u)/a;
        s=u*t+(a*t*t)/2;
        printf("Case %d: %0.3lf %0.3lf\n",c,s,t);
    }

    else if(n==3){
        scanf("%lf %lf %lf",&u,&a,&s);
        v=sqrt(u*u+2*a*s);
        t=(v-u)/a;
        printf("Case %d: %0.3lf %0.3lf\n",c,v,t);
    }

    else if(n==4){
        scanf("%lf %lf %lf",&v,&a,&s);
        u=sqrt(v*v-2*a*s);
        t=(v-u)/a;
        printf("Case %d: %0.3lf %0.3lf\n",c,u,t);
    }

    else if(n==0){
        break;
    }

    else{
        printf("Invalid\n");
    }

    }

    return 0;
}
