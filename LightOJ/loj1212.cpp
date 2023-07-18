#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,t,m,n,cnt,mark,temp;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&m);
        getchar();
        printf("Case %d:\n",i);
        int a[n];
        cnt=0; mark=-1;
        for(j=0;j<m;j++)
        {
            char b[15];
            for(k=0;k<15;k++)
                b[k]='\0';
            scanf("%s",&b);

            if(b[4]=='L')
            {
                scanf("%d",&temp);
                getchar();
                if(cnt==0)
                {
                    printf("Pushed in left: %d\n",temp);
                    cnt=1;
                    a[0]=temp;
                }
                else if(cnt==n)
                    printf("The queue is full\n");
                else
                {
                    printf("Pushed in left: %d\n",temp);
                    cnt++;
                    for(k=n-2;k>=0;k--)
                    {
                        a[k+1]=a[k];
                    }
                    a[0]=temp;
                }
            }
            else if(b[4]=='R')
            {
                scanf("%d",&temp);
                getchar();
                if(cnt==0)
                {
                    printf("Pushed in right: %d\n",temp);
                    cnt=1;
                    a[0]=temp;
                }
                else if(cnt==n)
                    printf("The queue is full\n");
                else
                {
                    printf("Pushed in right: %d\n",temp);
                    a[cnt]=temp;
                    cnt++;
                }
            }
            else if(b[3]=='L')
            {
                if(cnt==0)
                    printf("The queue is empty\n");
                else
                {
                    cnt--;;
                    printf("Popped from left: %d\n",a[0]);
                    for(k=1;k<n;k++)
                        a[k-1]=a[k];
                }
            }
            else if(b[3]=='R')
            {
                if(cnt==0)
                    printf("The queue is empty\n");
                else
                {
                    printf("Popped from right: %d\n",a[cnt-1]);
                    cnt--;
                }
            }
        }
    }

    return 0;
}
