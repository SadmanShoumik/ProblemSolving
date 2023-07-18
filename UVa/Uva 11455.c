#include<stdio.h>

int main()

{
    long int n,i,j,flag;

    while(scanf("%ld",&n)!=EOF)
    {
        i=1;

        while(i<=n)
        {
            i=i+1;

            long int a,b,c,d,temp,m,n,o,p;
            scanf("%ld %ld %ld %ld",&a,&b,&c,&d);

            m=a; n=b; o=c; p=d;
            flag=0;

            for(j=0;j<=10;j++)
            {
                if(m+n+o<=p){flag++;}

                temp=m; m=n; n=o; o=p; p=temp;
            }

            if(flag>=1){printf("banana\n"); }

            else if(a==b && b==c && c==d){printf("square\n"); }

            else if(a==c && b==d && a!=b || a==b && c==d && a!=c || a==d && b==c && a!=b){printf("rectangle\n"); }

            else if(flag==0){printf("quadrangle\n"); }

        }
    }

    return 0;
}
