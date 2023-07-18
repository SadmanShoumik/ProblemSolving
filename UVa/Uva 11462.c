#include<stdio.h>
#include<stdlib.h>

void mergesort(int *a,int n);
void MERGE(int *a,int *L,int *R,int n);

int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        mergesort(a,n);

        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}

void mergesort(int *a,int n)
{
    int mid=0,i;
    int L,R;
    mid=n/2;

    if(n<2)
        return;
    else
    {
        int L[mid];
        int R[n-mid];

        for(int i=0;i<mid;i++)
        {
            L[i]=a[i];
        }
        for(i=mid;i<n;i++)
        {
            R[i-mid]=a[i];
        }
        mergesort(L,mid);
        mergesort(R,(n-mid));
        MERGE(a,L,R,n);
    }
}

void MERGE(int *a,int *L,int *R,int n)
{
    int i=0,j=0,k=0;
    int mL,mR;
    mL=n/2;
    mR=n-mL;

    while(i<mL && j<mR)
    {
        if(L[i]<R[i])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<mL)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<mR)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}
