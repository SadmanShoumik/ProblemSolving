#include<bits/stdc++.h>

using namespace std;

int t;

int main()
{
    int n,i,j,k,l,a,b,arrsize,coms;
    char c;

    scanf("%d",&t);
    for(i=0;i<t;i++)

    {
        scanf("%d %d",&arrsize,&coms);
        int arr[arrsize];

        for(j=0;j<arrsize;j++)
            scanf("%d",&arr[j]);
        getchar();

        while(coms--)
        {
            scanf("%c",&c);

            if(c=='S')
            {
                scanf("%d",&a);
                getchar();
                for(k=0;k<arrsize;k++)
                    arr[k]+=a;
            }
            else if(c=='M')
            {
                scanf("%d",&a);
                getchar();
                for(k=0;k<arrsize;k++)
                    arr[k]*=a;
            }
            else if(c=='D')
            {
                scanf("%d",&a);
                getchar();
                for(k=0;k<arrsize;k++)
                    arr[k]/=a;
            }
            else if(c=='R')
            {
                a=0;
                while(a<arrsize/2)
                {
                    swap(arr[a],arr[arrsize-a-1]);
                    a++;
                }
            }
            else if(c=='P')
            {
                scanf("%d %d",&a,&b);
                getchar();
                swap(arr[a],arr[b]);
            }
            else
                coms++;
        }

        printf("Case %d:\n%d",i+1,arr[0]);
        for(j=1;j<arrsize;j++)
        {
            printf(" %d",arr[j]);
        }
        printf("\n");
    }

    return 0;
}
