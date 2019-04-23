/*
*	Exercise Mathematics II 61 : CRC
*/

#include <stdio.h>

int main()
{
	int i,x,y,z,a,b,c;
	while(scanf("%d %d %d",&x,&y,&z) != EOF)
	{
		if(x < 0 || y < 0 || z < 0)
		{
			printf("No solution\n");
			continue;
		}
		c = x - z;	//c = crab
		i = y - 8 * c;	//2a+4b = i
		b = (i - 2 * z) / 2;	//a = chicken
		a = x - b - c;	//b = rabbit
		if(b % 2 != 0 || a < 0 || b < 0 || c < 0)
		{
				printf("No solution\n");
				continue;
		}
		printf("%d %d %d\n",a,b,c);
	}

	return 0;
}
