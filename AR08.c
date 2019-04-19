#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 1024

int main()
{
    int start, end;
    int n, i, k;
    int sum;
    char array[m];
    char line[m];
    char str[m];

   fgets(line,m,stdin);
   n = strlen(line);
   int len = 0;
   int cnt = 0;


   for (i = 0; i < 100 && len < n; i++)
   {
        k = 0;
        while (len < n && line[len] != ' ')
        {
            str[k++] = line[len++];
        }
        str[k] = 0;
        len++;
        array[i] = atoi(str);
        cnt++;
    }

    int max = array[0];
    int maxStart = 0;
    int maxEnd = 0;
        for(start = 0;start < cnt; start++)
        {
            sum = 0;
            for(end = start; end < cnt; end++)
            {
                sum += array[end];
                if(sum > max)
                {
                    max = sum;
                    maxStart = start;
                    maxEnd = end;
                }
            }
        }
        if (max < 0)
            max = 0;
        printf("%d\n",max);

    return 0;
}

