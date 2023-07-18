#include<stdio.h>
#include<math.h>
long long int fact(long long int a)
{
    int flag;
    if(a%2==0 || a%3==0 || a%5==0)
    {
        flag=1;
    }
    else{flag=0;}
    return flag;
}
baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal
int main()
{
    long long int i,j,k,count=1,flag=0;
    for(i=2;count<=1500;i++)
    {
        j=i;
        while(j%2==0)
        {
            j=j/2;
            flag=fact(j);
        }
        for(k=3;k<sqrt(j);k=k+2)
        {
            while(j%k==0)
            {
                flag=fact(k);
                j=j/k;
            }
        }
        if(flag=1){count++;}
    }
    printf("The 1500'th ugly number is %lld.\n");
    return 0;
}
