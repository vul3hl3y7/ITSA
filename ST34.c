#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
		char array[101];
		int j,i,num;
		int alpha[26] = {0};

		scanf("%s", array);
		num = strlen(array);
		for (j=0; j < num; j++)
		{
				if(('A' <= array[j]) && ( array[j] <= 'Z'))
				{
						alpha[ array[j]- 'A']++;
				}
				else if(('a' <= array[j]) && ( array[j] <= 'z'))
				{
						alpha[ array[j]- 'a']++;
				}
		}
		for(i = 0;i < 26;i++)
			printf("%d\n",alpha[i]);

		return 0;
}
