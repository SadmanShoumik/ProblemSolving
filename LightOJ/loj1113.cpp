#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k,l,stand,range,len;
    cin>>t;
    getchar();
    for(i=1;i<=t;i++)
    {
        printf("Case %d:\n",i);
        char a[200][200], in[200], in2[200];
        stand=0; range=0;
        strcpy(a[0],"http://www.lightoj.com/");
        while(scanf("%s",&in))
        {
            if(in[0]=='Q')
                break;
            else if(in[0]=='B')
            {
                if(stand==0)
                    printf("Ignored\n");
                else
                    printf("%s\n",a[--stand]);
            }
            else if(in[0]=='F')
            {
                if(stand==range)
                    printf("Ignored\n");
                else
                {
                    printf("%s\n",a[++stand]);
                }
            }
            else if(in[0]=='V')
            {
                scanf("%s",&in2);
                stand++; range++; k=0;
                memset(a[stand],0,sizeof(a[stand]));
                strcpy(a[stand],in2);
                memset(in2,0,sizeof(in2));
                range=stand;
                printf("%s\n",a[stand]);
            }

        }
    }
    return 0;
}
