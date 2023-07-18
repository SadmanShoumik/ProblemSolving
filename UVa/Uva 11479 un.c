#include<stdio.h>

int main()

{
    int t,i,j,k,temp;
    long int a,b,c;

    scanf("%d",&t);
	for(i=1;i<=t;i++){
		
		scanf("%ld %ld %ld",&a,&b,&c);
		
			
                if(a+b<=c || b+c<=a || c+a<=b){
                    printf("Case %d: Invalid\n",i);
                }
                
                else if(a!=b && b!=c && c!=a){
                    
                   	printf("Case %d: Scalene\n",i);
                }
			

            else if (a==b && b==c){
                printf("Case %d: Equilateral\n",i);
            }
			
			
			else if(a==b && b!=c || a==c && b!=a || b==c && b!=a){
					printf("Case %d: Isosceles\n",i);
					
				}
				
   }

    return 0;
}
