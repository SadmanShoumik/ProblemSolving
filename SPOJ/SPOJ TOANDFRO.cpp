#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int n,i,j,k,l,flag,len;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

        char a[300];
        scanf("%s",&a);

        len=strlen(a);
        k=(n*2)-1;
        l=len/n;

        int b[l];
        b[0]=0;

        for(i=1;i<l;i++)
        {
            b[i]=b[i-1]+k;
            i++;
            b[i]=b[i-1]+1;
        }

        flag=0; j=0;
        for(i=0;j<len;i++)
        {
            if(i==l)
            {
                flag=0;
                i=0;
            }

            printf("%c",a[b[i]]);
            //printf("%d\n",b[i]);
            if(flag==0)
            {
                flag=1;
                b[i]++;
            }
            else if(flag==1)
            {
                flag=0;
                b[i]--;
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
