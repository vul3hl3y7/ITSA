#include<stdio.h>
#include<stdlib.h>

#define m 256

int main()
{
		char line[m];
		int i, j;

		while(fgets(line,m,stdin) != NULL)
		{
				i = 0;
				while(line[i] != '\n')
				i++;

				if(i == 1) {
						j = line[0] - 'A' + 1;
				}
				else if(i == 2){
						j = (line[0] - 'A' + 1) * 26 + (line[1] - 'A' + 1);
				}
				else if(i == 3){
						j = 26 + (line[0] - 'A' + 26) * (line[1] - 'A' + 26) + (line[2] - 'A' + 1);
				}
				printf("%d\n", j);
		}

		return 0;
}
