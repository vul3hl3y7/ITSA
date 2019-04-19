#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char array[81];
        int j,i,num,max,index;
        char alpha[256] = {0};
        int none;

        while(scanf("%s", array) != EOF)
        {
            memset(alpha, 0, 256);
            num = strlen(array);
            for (j = 0; j < num; j++)
            {
                alpha[ array[j] ]++;
            }

            max = alpha[0];
            index = 0;
            for(i = 1;i < 256; i++)
            {
                if( max < alpha[i])
                {
                    max = alpha[i];
                    index = i;
                }
            }
            none = 0;
            for(i = 1;i < 256; i++)
            {
                if(( max == alpha[i]) && (i != index ))
                {
                    printf("None\n");
                    none = 1;
                    break;
                }
            }
            if (!none)
                printf("%c\n",index);
        }
        return 0;
}
