#include<stdio.h>

int main()

{
    int count;
    char n[10];

    count=0;

    while(1){

            count++;

        scanf("%s",n);

        if(n[0]=='*'){
            break;
        }

        else if(n[0]=='H' && n[1]=='a' && n[2]=='j' && n[3]=='j'){
            printf("Case %d: Hajj-e-Akbar\n",count);
        }

        else if(n[0]=='U' && n[1]=='m' && n[2]=='r' && n[3]=='a' && n[4]=='h'){
            printf("Case %d: Hajj-e-Asghar\n",count);
        }

    }

    return 0;
}
