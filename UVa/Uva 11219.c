#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,age;
    char a[2][200];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        getchar();
        int day[2],month[2],year[2];
        gets(a[0]);
        gets(a[1]);
        for(j=0;j<10;j++)
        {
            a[0][j]=a[0][j]-48;
            a[1][j]=a[1][j]-48;
        }
        day[0]=(a[0][0]*10)+a[0][1];
        month[0]=(a[0][3]*10)+a[0][4];
        year[0]=a[0][9]+(a[0][8]*10)+(a[0][7]*100)+(a[0][6]*1000);
        day[1]=(a[1][0]*10)+a[1][1];
        month[1]=(a[1][3]*10)+a[1][4];
        year[1]=a[1][9]+(a[1][8]*10)+(a[1][7]*100)+(a[1][6]*1000);
        if(year[1]>year[0])
        {
            printf("Case #%d: Invalid birth date\n",i);
        }
        else if(year[1]>=year[0] && month[1]>month[0])
        {
            printf("Case #%d: Invalid birth date\n",i);
        }
        else if(year[1]>=year[0] && month[1]>=month[0] && day[1]>day[0])
        {
            printf("Case #%d: Invalid birth date\n",i);
        }
        else if(year[0]>=year[1])
        {
            age=year[0]-year[1];
            if(month[0]==month[1])
            {
                if(day[0]<day[1])
                    age=age-1;
            }
            else if(month[0]<=month[1])
                age=age-1;

            if(age<=130)
                printf("Case #%d: %d\n",i,age);
            else
                printf("Case #%d: Check birth date\n",i);
        }
    }
    return 0;
}
