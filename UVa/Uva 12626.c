#include<stdio.h>
#include<string.h>
int main()

{
    int n,i,j;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        int cm=0,ca=0,cr=0,cg=0,ci=0,ct=0,piz=0,l;

        char a[600];

        scanf("%s",&a);
        l=strlen(a);

        for(j=0;j<=l;j++)
        {
            if(a[j]=='M'){cm++;}
            else if(a[j]=='A'){ca++;}
            else if(a[j]=='R'){cr++;}
            else if(a[j]=='G'){cg++;}
            else if(a[j]=='I'){ci++;}
            else if(a[j]=='T'){ct++;}
        }

        while(cm>=1 && ca>=3 && cr>=2 && cg>=1 && ci>=1 && ct>=1)
        {
            piz++;
            cm=cm-1;
            ca=ca-3;
            cr=cr-2;
            cg=cg-1;
            ci=ci-1;
            ct=ct-1;
        }

        printf("%d\n",piz);
        memset(a,0,600);
    }

    return 0;
}
