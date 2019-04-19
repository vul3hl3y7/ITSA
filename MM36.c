#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE  1
#define BASE_NUMBER     173
#define NUM_BASE_PRIME  40


// num <= 30000; test prime < 174  (174 * 174=30276)
int prime[] = {2,  3,  5,  7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
               53, 59, 61, 67, 71, 73, 79, 83, 89, 97,
			   101, 103, 107, 109, 113, 127, 131, 137, 139, 149,
			   151, 157, 163, 167, 173
              };

int isprime(int num)
{
	int i;

	for (i = 0; i < NUM_BASE_PRIME; i++)
	{
		if (num % prime[i] == 0)
			return FALSE;
	}
	return TRUE;
}


int main(void)
{
    int n,i,cnt;
    while(scanf("%d", &n) != EOF && (n != 0))
	{
		if(n > 30000)
				exit(0);
		else if(n < 0)
				exit(0);

		if (n > BASE_NUMBER)
		{
			cnt = NUM_BASE_PRIME;
    		for(i = BASE_NUMBER + 1;i <= n;i++)
			{
				if (isprime(i) == TRUE)
					cnt++;
			}
			printf("%d\n",cnt);
		}
		else if (n < BASE_NUMBER)
		{
			cnt = 0;
   			for(i = 0;i < NUM_BASE_PRIME;i++)
			{
				if (prime[i] > n)
				   break;
			}
			printf("%d\n",i);
		}
		else //(n == BASE_NUMBE)
			printf("%d\n", NUM_BASE_PRIME);
	}
	return 0;
}

