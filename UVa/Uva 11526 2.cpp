#include<iostream>
#include<stdio.h>

using namespace std;

long long int h(long long int n)
{
    long long int i,j,k,l,res;
    res=n;
    if(n%2==0)
        j=(n/2);
    else if(n%2==1)
        j=(n/2)+1;
    res+=j;

    for(i=2;i<=n-j;i++)
        res+=(n/i);
    return res;
}

int main()
{
    long long int t,i,n,res;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        res=h(n);
        cout<<res<<endl;
    }
    return 0;
}
