#include<stdio.h>
#include<stdlib.h>

#define m 50

int cmp(int *a,int *b)
{
		return(*b - *a);//由大排到小
}

int main()
{
		int N,i,j;
		int count = 1;
		int A[m];

         for(i = 0;i < m; i++){
                scanf("%d",&N);
				if(N == -999) break;
				A[i] = N;
		}

		qsort(A, i, sizeof(int), cmp);

		for(j = 0;j < i;j++){
				if(A[j] == A[j+1]){
						count++;
				}
				else{
						printf("%d %d\n",A[j],count);
						count = 1;
				}
		}
		return 0;
}
