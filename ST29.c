/*
*	Exercise Strings 29 : Decompression
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 1024

int main()
{
    int i,k,num,j,cnt;
    char array[m],s_cnt[m],pattern[m];
    j = 0;
    while( scanf("%s",array) != EOF )
    {
        num = strlen(array);
        for(i = 0;i < num;)
        {
            j = 0;
            while (( '0' <= array[i] ) && ( array[i] <= '9' ))
            {
                s_cnt[j++] = array[i++];
            }
            s_cnt[j] = '\0';
            cnt = atoi(s_cnt);

            j = 0;
            while (( '0' > array[i] ) || ( array[i] > '9' ))
            {
                pattern[j++] = array[i++];
            }
            pattern[j] = 0;

            for(k = 0; k < cnt; k++)
                printf("%s",pattern);
        }
        printf("\n");
    }
    return 0;
}
