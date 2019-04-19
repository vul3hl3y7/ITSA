#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 1024

int main()
{
		char array[m];
		int j, score, len;
		while((scanf("%s",array) != EOF) && (strcmp(array,"end") != 0))
		{
		    score = 0;
            len = strlen(array);
			for(j = 0;j < len;j++)
			{
				if(array[j] == 'a'||array[j] == 'e'||array[j] == 'i'||array[j] == 'o'||array[j] == 'u' ||
				   array[j] == 'A'||array[j] == 'E'||array[j] == 'I'||array[j] == 'O'||array[j] == 'U')
						score += 5;
				else
						score += 2;

				if(('A' <= array[j]) && (array[j]) <= 'Z')
						   score += 1;
			}

			printf("%d",score);
			printf("\n");
		}
		return 0;
}
