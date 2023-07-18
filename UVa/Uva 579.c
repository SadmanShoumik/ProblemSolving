#include<stdio.h>
#include<string.h>
int main()
{
    double h,m,deg,t;
    int p,q,j,k;
    while(1)
    {
        char time[5];
        double time2[5];
        gets(time);
        if(time[0]-48==0 && time[2]-48==0 && time[3]-48==0){break;}
        p=strlen(time);
        h=0; m=0;
        if(p==4)
        {
            for(k=2;k<4;k++)
            {
                time2[k]=time[k]-48;
                m=(m*10)+time2[k];
            }
            time2[0]=time[0]-48;
            h=time2[0];
        }
        else if(p==5)
        {
            for(k=3;k<5;k++)
            {
                time2[k]=time[k]-48;
                m=(m*10)+time2[k];
            }
            for(k=0;k<2;k++)
            {
                time2[k]=time[k]-48;
                h=(h*10)+time2[k];
            }
        }
        h=h+(m/60.0);
        m=m/5;
        if(h>=12){h=h-12;}
        if(h>=m)
            deg=h-m;
        else
            deg=m-h;
        deg=deg*30;
        if(deg>180){deg=360-deg;}
        printf("%0.3lf\n",deg);
    }
    return 0;
}
