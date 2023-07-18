#include<iostream>
#include<stdio.h>

using namespace std;

long long int h(long long int n,long long int d)
{
    long long int res,i,j,k,div;
    res=n; div=d+1;
    if(n%div==0)
        k=(n/div);
    else if(n%div!=0)
        k=(n/div)+1;
    if(n==0)
        return 0;
    res=res+(d*k);
    n=n/div;
    res=res+h(n,d+1);
    return res;
}
int main()
{
    long long int t,i,n,res;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        res=h(n,1);
        cout<<res<<endl;
    }
    return 0;
}
