#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,i,j,k,l,f1,f2,f3,a[40],sum,cnt,n1;
    cin>>t;

    for(i=0;i<t;i++)
    {
        f1=f2=f3=k=sum=cnt=0;
        cin>>n;
        while(n>0)
        {
            if(n%2==0)
            {
                f1=1;
            }
            if(n%2==1)
            {
                f2=1;
                cnt++;
            }
            a[k]=n%2; n=n/2;
            if(a[k]==0 && f2==1 && a[k-1]==1 && f3==0)
            {
                swap(a[k],a[k-1]);
                f3=1;
                n1=cnt-1;
                for(j=k-1;j>=0;j--)
                {
                    a[j]=0;
                }
            }
            k++;
        }

        a[k]=0;
        if(a[k-1]==1 && f3==0)
        {
            swap(a[k],a[k-1]);
            n1=cnt-1;
            for(j=k-1;j>=0;j--)
            {
                a[j]=0;
            }
        }
        for(j=0;j<n1;j++)
        {
            a[j]=1;
        }

        for(j=k; j>=0; j--)
        {
            sum+=( (pow(2,j)) * a[j] );
        }
        printf("Case %lld: %lld\n",i+1,sum);
    }

    return 0;
}
