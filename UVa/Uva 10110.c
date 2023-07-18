#include<stdio.h>
#include<math.h>
int main()
{
    long int n,i;
    long int root;
    double flag;
    while(scanf("%ld",&n)!=EOF)
    {
        if(n==0){break;}
        flag=sqrt(n);
        root=flag;
        if(root*root==n)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
