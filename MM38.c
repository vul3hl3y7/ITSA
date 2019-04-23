/*
*	Exercise Mathematics 38 : Rational Number Addition
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
		long int a,b,c,d,e,t,i,j;
		while(scanf("%ld/%ld %ld/%ld",&a,&c,&b,&d) != EOF)
		{
				if(c < d)
				{
						t = c;
						c = d;
						c = t;
						t = a;
						a = b;
						a = t;
				}
				if(a == 0 && b == 0 && c == 0 && d == 0)
						exit(1);
				else if(b == 0)
						printf("%ld/%ld\n",a,c);
				else if(a == 0)
						printf("%ld/%ld\n",b,d);
				else
				{
					e = c % d;
					if(e == 0)
					{
						i = a + b * (c / d);
						j = c;
						e = i % j;
						if(e == 0)
							printf("%ld/%ld\n",i / j,j / j);
						else
							printf("%ld/%ld\n", i, j);
					}
					else
					{
						i = a * d + b * c;
						j = c * d;
						a = i;
						while(a >= 1)
						{
							if(i % a == 0 && j % a == 0)
									break;
									a--;
	//						if(i > j)
	//							e = i % j;
	//						else
	//							e = j % i;
						}
						if(a == 0)
							printf("%ld/%ld\n",i / j,j / j);
						else
							printf("%ld/%ld\n",i / a,j / a);
					}
				}
		}
		return 0;
}
