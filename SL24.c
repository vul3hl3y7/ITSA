#include<stdio.h>
#include<stdlib.h>

#define m 256

int main()
{
		int n, j;
		int i = 0;
		int x = 0;
		int y = 0;
		int z = 0;
		int A[m];
		scanf("%d", &n);
		for(i = 0; i < n; i++)
		scanf("%d",&A[i]);
		for(i = 0; i < n; i++){
				j = A[i] % 3;
				if(j == 0)
				x++;
				else if(j == 1)
				y++;
				else z++;
		}
		printf("%d %d %d\n",x,y,z);

		return 0;
}
