/*
*	Exercise Strings 22 : Binary Conversion
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
		int i,j,a,b,n,N;
		char buf[20],A[10],B[10];
		scanf("%d",&N);
		fgets(buf,20,stdin);
		for(n=0;n<N;n++)
		{
				fgets(buf, 20, stdin);
				for(i = 0; i < 8; i++)
				A[i] = buf[i];
				for(i = 0; i < 8; i++)
				B[i] = buf[i + 9];

				a=(A[0]-'0')*128+(A[1]-'0')*64+(A[2]-'0')*32+(A[3]-'0')*16+(A[4]-'0')*8+(A[5]-'0')*4+(A[6]-'0')*2+(A[7]-'0');
                b=(B[0]-'0')*128+(B[1]-'0')*64+(B[2]-'0')*32+(B[3]-'0')*16+(B[4]-'0')*8+(B[5]-'0')*4+(B[6]-'0')*2+(B[7]-'0');

				j = a + b;
				printf("%d\n",j);
		}
		return 0;
}
