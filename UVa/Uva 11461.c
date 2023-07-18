#include <stdio.h>
#include<math.h>

int main ()
{
    int a,b,i,j,r;
    while(1)
    {
    	scanf("%d %d",&a,&b);

    	  j=0;

        if (a==0 && b==0)
        {
            break;
        }

        else if(a<b)
        {
            for(i=a;i<=b;i++)
            {
                r=sqrt(i);
                if(r*r==i)
                {
                    j++;
                }
            }
            printf("%d\n",j);
        }
        else if(a>b)
        {
            for(i=b; i<=a; i++)
            {
                r=sqrt(i);
                if(r*r==i)
                {
                    j++;
                }
            }
            printf("%d\n",j);
        }
    }
    return 0;
}
