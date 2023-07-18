#include<cstdio>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k,len1,len2,flag;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        char a[150],b[150];
        int cnt[123];
        flag=0;
        for(j=0;j<123;j++)
            cnt[j]=0;
        for(j=0;j<150;j++)
        {
            a[j]=b[j]='\0';
        }

        j=-1;
        do
        {
            j++;
            scanf("%c",&a[j]);
        }while(a[j]!='\n');

        j=-1;
        do
        {
            j++;
            scanf("%c",&b[j]);
        }while(b[j]!='\n');

        len1=strlen(a); len2=strlen(b);
        for(j=0;j<len1;j++)
        {
            if(a[j]>64 && a[j]<91)
                a[j]+=32;
            cnt[a[j]]++;
        }
        for(j=0;j<len2;j++)
        {
            if(b[j]>64 && b[j]<91)
                b[j]+=32;
            cnt[b[j]]--;
        }
        for(j=97;j<123 && flag==0;j++)
        {
            if(cnt[j]!=0)
                flag=1;
        }
        if(flag==0)
            printf("Case %d: Yes\n",i);
        if(flag==1)
            printf("Case %d: No\n",i);
    }
    return 0;
}

