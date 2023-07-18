#include<iostream>
#include<stdio.h>

using namespace std;

long long int H(long long int n)
{
    long long int i,res=0;

    for(i=1;i<=n;i=i+1)
    {
        res=(res+n/i);
        cout<<i<<" "<<res<<" "<<n/i<<endl;
    }
    return res;
}

int main()
{
    long long int t,i,n,res;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        res=H(n);
        cout<<"Res "<<res<<endl;
    }
}
