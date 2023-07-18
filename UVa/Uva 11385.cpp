#include<bits/stdc++.h>

using namespace std;

int fib[100];

void genfib(int i)
{
    if(i>45)
        return;
    fib[i]=fib[i-1]+fib[i-2];
    genfib(i+1);
}

int main()
{
    fib[0]=0; fib[1]=1; fib[2]=2; fib[3]=3;
    genfib(4);
    int i,j,k,l,t,m,nlet,f1,f2,cnt;
    cin>>t;
    char a;
    while(t--)
    {
        cin>>nlet;
        int fibo[nlet][2];
        for(j=0;j<nlet;j++)
        {
            cin>>fibo[j][0];
            getchar();
        }
        for(j=0;j<nlet;j++)
        {
            scanf("%c",&a);
            if(a>64 && a<91)
            {
                fibo[j][1]=a;
            }
            else
                j--;
        }
        while(a!='\n')
        {
            scanf("%c",&a);
        }
        f2=0; cnt=0;
        for(j=1;j<46;j++)
        {
            f1=1;
            for(k=0;k<nlet;k++)
            {
               if(fib[j]==fibo[k][0])
               {
                   printf("%c",fibo[k][1]);
                   f1=0; f2=0; cnt++;
               }
            }
            if(f1==1 && f2==0 && cnt<nlet)
            {
                printf(" ");
                f1=1;
            }
        }
        printf("\n");
    }

    return 0;
}
