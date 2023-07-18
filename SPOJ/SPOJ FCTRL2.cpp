#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int res[101][1000];

void multi(int n)
{
    int temp,i;
    temp=0;
    i=0;
    for(i=0;i<10000;i++)
    {
        res[n][i]=res[n-1][i];
        if(res[n-1][i]==-1)
            break;
    }
    i=0;
    while(res[n][i]!=-1)
    {
        res[n][i]=(res[n][i]*n)+temp;
        temp=res[n][i]/10;
        res[n][i]=res[n][i]%10;
        i++;
    }
    while(temp!=0)
    {
        res[n][i]=temp;
        res[n][i]=res[n][i]%10;
        temp=temp/10;
        i++;
    }
    res[n][i]=-1;

}

void fctrl()
{
    int i;
    res[0][0]=-1;
    res[1][0]=1;
    res[1][1]=-1;
    for(i=2;i<=100;i++)
    {
        multi(i);
    }
}

int main()
{
    fctrl();
    int t,i,j,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        j=1000;
        while(res[n][j]!=-1)
            j--;
        j--;
        for(;j>=0;j--)
            printf("%d",res[n][j]);
        printf("\n");
    }
    return 0;
}
