#include <stdio.h>
#include <stdlib.h>

#define m 1024

int main()
{
    int a,b,c,n,num,ans[m],ans1[m];
    scanf("%d", &n);
    for(a=0;a<n;a++)
    {
        scanf("%d",&num);
        for(b = 2,c = 0;b <= num; b++)
        {
            if(num % b == 0)
            {
                ans[c] = b;
                ans1[c] = 0;
                while(num % b == 0)
                {
                    ans1[c]++;
                    num = num / b;
                }
                c++;
            }
        }
        for(b = 0;b < c; b++)
        {
            printf("%d", ans[b]);
            if(ans1[b] != 1)
            printf("^%d", ans1[b]);
            if(b != c - 1)
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
