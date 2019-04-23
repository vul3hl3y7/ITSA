/*
*	Exercise Mathematics 34 : GCD of Min and Max
*/

#include <stdio.h>
#include <stdlib.h>

#define m 1000

int main()
{
	int n,k,i,j,min,max,a;
	int buf[m];
	scanf("%d",&n);

	for(i = 0;i < n;i++)
	{
		scanf("%d", &k);
		for(j = 0;j < k;j++)
		{
			scanf("%d",&buf[j]);
		}

		min = buf[0];
		max = buf[0];

		for(j = 0;j < k;j++)
		{
			if(buf[j] < min)
				min = buf[j];
			if(buf[j] > max)
				max = buf[j];
		}

		a = min;
		while(a >= 1)
		{
			if(max % a == 0 && min % a == 0)
				break;
			a--;
		}
		printf("%d\n", a);
		//printf("i%d\n",min);
		//printf("x%d\n",max);
	}
	return 0;
}
