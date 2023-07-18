#include<bits/stdc++.h>

using namespace std;

long int arr[20],total,mini;

void func(long int i, long int l, long int r)
{
    if(i<0)
        return;
    mini=min(mini, abs(l-r));
    func(i-1, l+arr[i], r-arr[i]);
    func(i-1, l, r);
}


int main()
{
    long int n,i;
    cin>>n;
    mini=INT_MAX;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }

    func(n-1, 0, total);

    printf("%ld\n",mini);

    return 0;
}
