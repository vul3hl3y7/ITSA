/*
*	Exercise Comprehensive 04 : Precision and Recall
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 200

int main()
{
    char correct[m], obtain[m];
    int  i,j;
    int num, len;
    int cor_pos,obt_pos,true_pos;
    float precision, recall;

    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        scanf("%s %s", correct, obtain);
        len = strlen(correct);
        cor_pos = 0;
        obt_pos = 0;
        true_pos = 0;

        for (j = 0; j < len; j++)
        {
            if (correct[j] == '1')
                cor_pos++;
            if (obtain[j] == '1')
            {
                obt_pos++;
                if (obtain[j] == correct[j])
                    true_pos++;
            }
        }
        precision = (float)true_pos / obt_pos;
        recall = (float)true_pos /cor_pos;
        printf("%.2f %.2f\n", precision, recall);
    }
    return 0;
}
