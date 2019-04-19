#include <stdio.h>
#include <stdlib.h>

int main()
{
		int i,a,b,c;
		c = 0;
		for(i = 0;i < 3;i++)
		{
			scanf("%d %d",&a,&b);
			c += a * b;
		}
		printf("%d\n",c);
		return 0;
}
