#include<stdio.h>

int main()

{
    double h;
    while(scanf("%lf",&h)!=0)
    {
        if(h==0){return 0;};

        double u1,u2,d,f,fs,sum,climb;
        scanf("%lf %lf %lf",&u1,&d,&f);

        fs=u1*f/100.0;
        sum=0;
        climb=0;
        u2=u1;

        int count=0;

        while(sum>=0 && u2>=0)
        {
            count++;
            climb=u2;
            sum=sum+climb;
            if (sum>h){printf("success on day %d\n",count); break;}
            u2=u2-fs;
            if(u2<0){u2=0;}
            sum=sum-d;
            if(sum<0){printf("failure on day %d\n",count); break;}

        }
    }

    return 0;
}
