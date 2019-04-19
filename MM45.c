#include <stdio.h>
#include <stdlib.h>

int main()
{
		int a,b,c,t;
		scanf("%d %d %d",&a,&b,&c);
		if(a - b < 0)	//a is max number
		{
			t = a;
			a = b;
			b = t;
		}
		if(a - c < 0)
		{
			t = a;
			a = c;
			c = t;
		}
		if(b - c < 0)	//b is second;c is third
		{
			t = b;
			b = c;
			c = t;
		}

		if(a >= b + c)
				printf("invalid\n");
		else if(a * a == b * b + c * c)
				printf("right\n");
		else if(a * a < b * b + c *c)
				printf("acute\n");
		else if(a * a > b * b + c * c)
				printf("obtuse\n");

		return 0;
}
