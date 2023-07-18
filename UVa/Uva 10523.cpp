#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

#define max 100000
int res[max],sum[max];
int res_size,sum_size;

int multi(int x,int res[], int res_size)
{
    int carry=0;
    for(int i=0;i<res_size;i++)
    {
        int prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }

    while(carry)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}

int power(int x,int n)
{
    int i;
    int res_size=0;
    int temp=x;
    while(temp!=0)
    {
        res[res_size++]=temp%10;
        temp=temp/10;
    }
    for(i=2;i<=n;i++)
    {
        res_size=multi(x,res,res_size);
    }
    return res_size;
}

int adding(int res[],int res_size,int sum[],int sum_size)
{
    int i,j,k,carry;
    i=0; j=0; k=0; carry=0;
    while(i<res_size && j<sum_size)
    {
        sum[k]=res[i]+sum[j]+carry;
        carry=sum[k]/10;
        sum[k]=sum[k]%10;
        i++; j++; k++;
    }
    while(i<res_size)
    {
        sum[k]=res[i]+carry;
        carry=sum[k]/10;
        sum[k]=sum[k]%10;
        i++; k++;
    }
    while(j<sum_size)
    {
        sum[k]=sum[j]+carry;
        carry=sum[k]/10;
        sum[k]=sum[k]%10;
        j++; k++;
    }

    if(carry>0)
    {
        sum[k]=carry; k++;
    }
    return k;
}

int main()
{
    int a,n,i,j,k,l;
    while(scanf("%d %d",&n,&a)!=EOF)
    {
        for(i=0;i<sum_size;i++)
        {
            sum[i]=0;
        }
        sum_size=0;
        if(a!=0)
        {
            for(i=1; i<=n; i++)
            {
                k=power(a,i);
                j=multi(i,res,k);


                if(i==1)
                {
                    sum_size=j;
                    for(l=sum_size-1; l>=0; l--)
                        sum[l]=res[l];
                }

                if(i>1)
                {
                    sum_size=adding(res,j,sum,sum_size);
                }
            }
            for(i=sum_size-1; i>=0; i--)
            {
                printf("%d",sum[i]);
                if(i==0)
                    printf("\n");
            }
        }
        else if(a==0)
        {
            printf("0\n");
        }
    }
    return 0;
}


