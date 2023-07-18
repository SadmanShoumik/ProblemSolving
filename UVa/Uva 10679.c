#include<stdio.h>
#include<string.h>

int main()
{
    char q[100500],t[2000];
    long long int n,m,i,j,k,l1,l2,z1,z2,lenq,lent,flag;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&q);
        scanf("%lld",&m);
        for(j=m;j>0;j--)
        {
            lenq=1; lent=1;
            flag=0;
            scanf("%s",&t);
            lenq=strlen(q); lent=strlen(t);
            for(k=0;k<lenq;k++)
            {
                if(q[k]==t[0] && q[k+lent-1]==t[lent-1])
                {
                    z1=k; l1=0; l2=lent-1; z2=k+l2;

                    while(q[z1]==t[l1] && q[z2]==t[l2] && z1<z2 && l1<l2)
                    {

                        flag+=2;
                        l1++; l2--;
                        z1++; z2--;

                    }
                    if(l1==l2 && z1==z2)
                    {
                        if(q[z1]==t[l1])
                            flag++;
                    }
                    if(flag!=lent)
                    {
                        flag=0;
                    }
                    else if(flag==lent)
                    {
                        break;
                    }
                }
            }
            if(flag==lent && lent>=1)
            {
                printf("y\n");
            }
            else if(flag!=lent)
            {
                printf("n\n");
            }
        }
    }
    return 0;
}
