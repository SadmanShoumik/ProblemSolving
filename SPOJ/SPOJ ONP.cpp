#include<cstdio>
#include<stack>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack <char> s;
    int t,i,j,k,n,len;
    char l,exp[500],res[500];
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%s",&exp);
        len=strlen(exp);
        k=0;
        for(j=0;j<len;j++)
        {
            if(exp[j]=='(')
                s.push(exp[j]);
            else if(exp[j]=='+' || exp[j]=='-' || exp[j]=='*' || exp[j]=='/' || exp[j]=='^')
                s.push(exp[j]);
            else if(exp[j]==')')
            {
                while(s.top()!='(')
                {
                    l=s.top();
                    printf("%c",l);
                    s.pop();
                }
                s.pop();
            }
            else
            {
                printf("%c",exp[j]);
            }
        }
        while(!s.empty())
        {
            l=s.top();
            printf("%c",l);
            s.pop();
        }
        printf("\n");
    }
    return 0;
}
