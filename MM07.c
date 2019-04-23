/*
*	Exercise Mathematics 07 : The Numbers 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 1024

int main()
{
	char buf_f[m],buf_i[m];
	char line[m];
	int i,j,g,a,b,count;

	count = b = 0;

	fgets(line,m,stdin);
	int len = strlen(line);

	sscanf(line,"%s %s",buf_i,buf_f);
    int lenset = strlen(buf_i);
    int lentar = strlen(buf_f);
  //  printf("%d %d", lenset, lentar);

	for(j = 0;j < lenset; j++)
		buf_i[j] = line[j];
	for(i = lenset + 1, g = 0;i < len - 1, g < lentar; i++, g++)
		buf_f[g] = line[i];

	for(a = 0;a < lentar; a++)
		{
			if(buf_i[b] == buf_f[a] && buf_i[b + 1] == buf_f[a + 1])
				count++;
		}
	printf("%d\n",count);
	return 0;
}
