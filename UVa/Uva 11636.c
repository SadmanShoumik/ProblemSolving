#include<stdio.h>
#include<math.h>
int main()
{
    long int n,i,res,line,count=0;
    while(scanf("%ld",&n)!=EOF)
    {
        if(n<0){break;}
        count++;
        for(i=0;;i++)
        {
            line=pow(2,i);
            if(line>=n)
            {
                res=i;
                break;
            }
        }
        printf("Case %ld: %ld\n",count,res);
    }
    return 0;
}
