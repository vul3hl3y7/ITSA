/*
*	Exercise Mathematics 22 : Jolly Jumpers
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 3000

int main()
{
        int array[m];
        int sub,i,cnt,flag;

        while((scanf("%d",&cnt) != EOF) && (cnt != 32))
        {
	        flag = 0;
            int* num = (int*)malloc(sizeof(int) * cnt);
            memset(num, 0, sizeof(int) * cnt);
            for(i = 0;i < cnt;i++)
            {
                scanf("%d",&array[i]);
        //  printf("%d i:%d\n",i);
                if(i > 0)
                {
                    if(array[i] > array[i - 1])
                        sub = array[i] - array[i - 1];
                    else
                        sub = array[i - 1] - array[i];

                   if(sub > (cnt - 1) || sub == 0)
                    {
                    	flag = 1;
                        //printf("Not jolly\n");
                        //break;
                    }
                    if(num[sub] == 0)
                        num[sub] = 1;
                    else
                   {
                   		flag = 1;
                   //     printf("Not jolly\n");
                   //     break;
                    }
                }
            }
        if(i == cnt && flag == 0)
       		    printf("Jolly\n");
      	else if(flag == 1)
            	printf("Not jolly\n");
        }
        return 0;
}
