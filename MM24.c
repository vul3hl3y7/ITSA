#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned long int i,j,k;

	while(scanf("%ld %ld", &i, &j) != EOF)
	{
		if(i >= j)
		{
			k = i - j;
			printf("%ld\n",k);
		//	continue;
		}
		else
		{
			k = j - i;
			printf("%ld\n", k);
		}
	}
	return 0;
}
