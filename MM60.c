/*
*	Exercise Mathematics II 60 : Find The Median
*/

#include <stdio.h>
#include <stdlib.h>

#define m 1024

int main()
{
    int i,j,k,num[m],temp;
    char line[m];
    while(fgets(line,m,stdin) != NULL)
    {
        num[0] = 0;
        for(i = 0,j = 0; i < m; i++)
        {
            if(line[i]=='\n' || line[i]=='\0')
            {
                break;
            }
            if(line[i]==' ')
            {
                j++;
                num[j] = 0;
            }
            else
            {
                num[j] = num[j] * 10 + ((int)line[i]-48);
            }
        }
        for(k = (j - 1); k >= 0; k--)
        {
            for(i = 0; i <= k; i++)
            {
                if(num[i] > num[i + 1])
                {
                    temp = num[i];
                    num[i]=num[i + 1];
                    num[i + 1]=temp;
                }
            }
        }
        if(j % 2 == 0)
        {
            printf("Median=%d\n",num[j / 2]);
        }
        else if(j % 2 == 1)
        {
            printf("Median=%d\n",(num[((j + 1)/ 2) - 1]));
        }
    }
    return 0;
}
