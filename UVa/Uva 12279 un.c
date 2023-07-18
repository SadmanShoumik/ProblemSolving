#include<stdio.h>

int main()
{
    int t,a,wr,hr,i,c;
    int j=0;

    while(scanf("%d",&t)!=EOF)
    {
        if(t==0)
        {
            break;
        }

        j++;
        wr=0;
        hr=0;

        for(i=0;i<t;i++)
        {
            scanf("&d",&a);

            if(a!=0)
            {
                wr=wr+1;
            }
            else if(a==0)
            {
                hr=hr+1;
            }

        }
        c=wr-hr;

        printf ("Case %d: %d\n",j,c);

    }


    return 0;
}
