#include<stdio.h>
#include<stdlib.h>

int main()
{
		int x,n,i,j;
		int flag = 0;

		while(scanf("%d %d",&x,&n)!=EOF)
		{
				if(x == 0 && n == 0)
				exit(0);
				if(flag == 1){
						printf("\n");
				}
				else if(flag == 0)
				flag = 1;

				if(x == 1){
						for(i = 0; i < n; i++){    //i:¦æ
								for(j = 0;j <= i; j++)
								printf("*");
								printf("\n");
						}
						for(i= 1; i < n; i++){
								for(j = 0; j < n - i; j++)
								printf("*");
								printf("\n");
						}
				}
				else if(x == 2){
						for(i = 0; i < n; i++){
								for(j = 0; j < n; j++)
								printf("*");
								printf("\n");
						}
				}
				else exit(0);
		}
		return 0;
}

