#include<cstdio>

using namespace std;

int main()
{
    int a,b,c,crev,arev,brev,n,m,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);

        arev=brev=0;

        while(1)
        {
            arev=(arev*10)+(a%10);
            a=a/10;
            if(a==0)
                break;
        }
       // printf("%d\n",arev);
        while(1)
        {
            brev=(brev*10)+(b%10);
            b=b/10;
            if(b==0)
                break;
        }
        //printf("%d\n",brev);
        c = arev + brev;
        crev=0;
        while(1)
        {
            crev=(crev*10)+(c%10);
            c=c/10;
            if(c==0)
                break;
        }

        printf("%d\n",crev);
    }
    return 0;
}
