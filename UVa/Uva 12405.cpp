#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int t,n,cntst,cntsc,i,j,k,l;
    string f;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        cntst=cntsc=0;
        cin>>n;
        cin>>f;
        for(j=0;j<n;j++)
        {
            if(f[j]=='.')
            {
                cntst++;
            }
            if(cntst==1 && f[j]=='#')
            {
                f[j]='.';
                j--;
            }
            if(cntst%3==0)
            {
                cntsc+=(cntst/3);
                cntst=0;
            }
            if(cntst>1 && f[j]=='#')
            {
                if(cntst%3>0)
                {
                    cntsc+=(cntst/3)+1;
                }
                if(cntst%3==0)
                {
                    cntsc+=(cntst/3);
                }
                cntst=0;
            }
        }
        if(cntst>0)
        {
            if(cntst%3>0)
                {
                    cntsc+=(cntst/3)+1;
                }
                if(cntst%3==0)
                {
                    cntsc+=(cntst/3);
                }
                cntst=0;
        }
        printf("Case %d: %d\n",i,cntsc);
    }

    return 0;
}
