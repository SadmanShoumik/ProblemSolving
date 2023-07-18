#include<stdio.h>
int main()
{
    int n,j,k,i,a,b,c,d,t[3],low,avg,grade,total;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        low=21;
        scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&t[0],&t[1],&t[2]);
        for(j=0;j<3;j++)
        {
            if(t[j]<low)
            {
                low=t[j];
            }
        }
        avg=(t[0]+t[1]+t[2]-low)/2;
        total=a+b+c+d+avg;
        if(total>=90){printf("Case %d: A\n",i);}
        else if(total>=80 && total<90){printf("Case %d: B\n",i);}
        else if(total>=70 && total<80){printf("Case %d: C\n",i);}
        else if(total>=60 && total<70){printf("Case %d: D\n",i);}
        else{printf("Case %d: F\n",i);}
    }
    return 0;
}
