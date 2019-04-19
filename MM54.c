#include <stdio.h>
#include <stdlib.h>

#define m 256

int main()
{
    int num;
    int a,array[256];
    array[2] = 2;
    array[3] = 3;
    for(a = 4;a <= 256; a++)
    {
        array[a] = array[a-1] + array[a-2];
    }

    while(scanf("%d",&num)!=EOF)
    {
        printf("%d\n", array[num]);
    }

    return 0;
}
