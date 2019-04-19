#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 1024

//             0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F
int zeros[16]={4, 3, 3, 2, 3, 2, 2, 1, 3, 2, 2, 1, 2, 1, 1, 0 };


int main()
{
    char str[m];
    int  i, h_hex, l_hex;

    scanf("%s", str);
    int len = strlen(str);
    int cnt = 0;

    for (i = 0; i < len; i++)
    {
        h_hex = str[i] / 16;
        l_hex = str[i] % 16;
        cnt += zeros[h_hex] + zeros[l_hex];
    }

    printf("%d\n", cnt);
    return 0;
}
