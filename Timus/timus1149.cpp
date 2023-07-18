#include<bits/stdc++.h>

using namespace std;

void a(int i, int n)
{
    if(i==n)
    {
        printf("sin(%d)",i);
        return;
    }
    printf("sin(%d",i);
    if(i%2==0)
        printf("+");
    else
        printf("-");
    a(i+1, n);
    printf(")");
}

void s(int i, int n)
{
    if(n==1)
    {
        a(1, i);
        printf("+%d",n);
        return;
    }
    else
    {
        a(1, i);
        printf("+%d)",n);
        s(i+1, n-1);
    }
}

int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<n;i++)
    {
        printf("(");
    }
    s(1, n);
    return 0;
}

