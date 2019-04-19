#include<stdio.h>
#include<stdlib.h>

int main()
{
		int i,j,n,t;
		while(scanf("%d %d",&t,&n))
		{
				if(t == 0 && n == 0) exit(0);
				else if(t == 1 && n >= 3 && n % 2 == 1){
						for(i = 0;i <= n / 2; i++){
								for(j = 0;j < n / 2 - i; j++)
								printf(" ");
								for(j = n / 2 - i; j <= n / 2 + i; j++)
								printf("*");
								for(j = 0;j < n / 2 - i; j++)
								printf(" ");
								printf("\n");
						}
						for(i = n / 2 - 1;i >= 0; i--){
								for(j = 0;j < n / 2 - i; j++)
								printf(" ");
								for(j = n / 2 - i;j <= n / 2 + i; j++)
								printf("*");
								for(j=0;j<n/2-i;j++)
								printf(" ");
								printf("\n");
						}
				}
				else if(t == 2 && n >= 3 && n % 2 == 1){
						for(i = 0;i <= n / 2; i++){
								for(j = 0;j < n / 2 - i; j++)
								printf("*");
								for(j = n / 2 - i; j <= n / 2 + i; j++)
								printf(" ");
								for(j = 0; j < n / 2 - i; j++)
								printf("*");
								printf("\n");
						}
						for(i = n / 2 - 1; i >= 0; i--){
								for(j = 0;j < n / 2 - i; j++)
								printf("*");
								for(j = n / 2 - i;j <= n / 2 + i; j++)
								printf(" ");
								for(j = 0; j < n / 2 - i; j++)
								printf("*");
								printf("\n");
						}
				}
				else continue;
				printf("\n");
		}
		return 0;
}
