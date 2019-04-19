#include <stdio.h>
#include <stdlib.h>

#define m 1024

int main()
{
		int F[m];
		int i, n, N;
		int j = 0;

		F[0] = 1;// Fibonacci Sequence
		F[1] = 1;

		scanf("%d",&N);
		while(j < N){
				scanf("%d", &n);
				if(n > 0 && n <= 45){
						for(i = 2;i < n;i++){
								F[i] = F[i-1] + F[i-2];
						}
						printf("%d\n", F[n-1]);
				}
				j++;
		}
		return 0;
}
