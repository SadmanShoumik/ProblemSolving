#include <stdio.h>
#include<string.h>

int main ()
{
    char S[14];
    int i,j;
    j=0;
    while(1)
    {

        j++;

        scanf("%s", &S);

        if(S[0]=='#')
        {
            return 0;
        }
        else if(S[0]=='H' && S[1]=='E' && S[2]=='L' &&S[3]=='L' && S[4]=='O')
        {
            printf("Case %d: ENGLISH\n",j);
        }
        else if(S[0]=='H' && S[1]=='O' && S[2]=='L' &&S[3]=='A' )
        {
            printf("Case %d: SPANISH\n",j);
        }
        else if(S[0]=='H' && S[1]=='A' && S[2]=='L' &&S[3]=='L' && S[4]=='O' )
        {
            printf("Case %d: GERMAN\n",j);
        }
        else if(S[0]=='B' && S[1]=='O' && S[2]=='N' &&S[3]=='J' && S[4]=='O' && S[5]=='U'&& S[6]=='R' )
        {
            printf("Case %d: FRENCH\n",j);
        }
        else if(S[0]=='C' && S[1]=='I' && S[2]=='A' &&S[3]=='O' )
        {
            printf("Case %d: ITALIAN\n",j);
        }
        else if(S[0]=='Z' && S[1]=='D' && S[2]=='R' &&S[3]=='A' && S[4]=='V' && S[5]=='S'&& S[6]=='T' && S[7]=='V'&& S[8]=='U' && S[9]=='J'&& S[10]=='T'&& S[11]=='E' )
        {
            printf("Case %d: RUSSIAN\n",j);
        }
        else
        {
            printf("Case %d: UNKNOWN\n",j);
        }

    }
    return 0;
}
