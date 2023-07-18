#include<stdio.h>
#include<string.h>
int main()
{
    long int i,j,k,bn,sn,len,temp,res;
    char ns[1000],bs[1000];
    while(gets(ns))
    {
        len=strlen(ns);
        bn=0; sn=0;
        for(i=0;i<len;i++)
        {
            ns[i]=ns[i]-48;
            for(j=0;j<=i;j++)
            {
                if(ns[i]>ns[j])
                {
                    temp=ns[j];
                    ns[j]=ns[i];
                    ns[i]=temp;
                }
            }
        }
        for(i=0;i<len;i++)
        {
            bs[i]=ns[len-1-i];
            for(j=0;j<=i;j++)
            {
                if(bs[i]<bs[j])
                {
                    temp=bs[j];
                    bs[j]=bs[i];
                    bs[i]=temp;
                }
            }
        }
        k=1;
        while(bs[0]==0)
        {
            temp=bs[0];
            bs[0]=bs[k];
            bs[k]=temp;
            k++;
        }
        for(i=0;i<len;i++)
        {
            bn=bn*10+ns[i];
            sn=sn*10+bs[i];
        }
        res=bn-sn;
        printf("%ld - %ld = %ld = 9 * %ld\n",bn,sn,res,res/9);
    }
    return 0;
}
