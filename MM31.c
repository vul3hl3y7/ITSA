/*
*	Exercise Mathematics 31 : Factorial Number
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,j,a;
	int b = 1;
	scanf("%d", &n);

	for(i = 1;i <= n; i++)
	{
		scanf("%d",&a);
		for(j = 1;j <= a;j++)
		{
			b = j * b;
		}
		printf("%d\n",b);
		b = 1;
	}
	return 0;
}
