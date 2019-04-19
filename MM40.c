#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i,j,a,b,w,s,k,n;
        int tmp[100000];
        scanf("%d", &i);
        for(j = 0;j < i; j++)
        {
                scanf("%d %d",&a,&b);
                if (a == 0)
                    printf("0\n");
                else
                {
                    s = 0;
                    while(a >= 1)
                    {
                            w = a / b;
                            k = a % b;  //- b*w;
                            tmp[s] = k;
                            s++;
                            a = w;
                    }
                    n = s;
                    for(s = n - 1;s >= 0; s--)
                            printf("%X", tmp[s]);
                    printf("\n");
                }
        }
        return 0;
}
