#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,count;
    char a[10];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%s",&a);
       count=0;
       if(strlen(a)==5)
       {
           printf("3\n");
       }
       else
       {
           if(a[0]=='o'){count++;}
           if(a[1]=='n'){count++;}
           if(a[2]=='e'){count++;}
           if(count>=2){printf("1\n");}
           else{printf("2\n");}
       }
    }
    return 0;
}
