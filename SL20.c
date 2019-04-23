/*
*	Exercise Simulation 20 : How Many Days
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define REF_YEAR    1970

int month_days[12] = {31,28,31,30,31,30,
                      31,31,30,31,30,31};
int month_days_4[12] = {31,29,31,30,31,30,
                      31,31,30,31,30,31};

int main()
{
    int i;
    int days = 0;
    int year,month,day;

    scanf("%d %d %d", &year, &month, &day);
    if (year < 1970 || year > 2100 || month < 1 || month > 12 || day < 1 ||
         (year % 4 == 0 && day > month_days_4[month-1]) ||
         (year % 4 != 0 && day > month_days[month-1])  )
    {
        printf("invalid\n");
        return 0;
    }

    for (i = REF_YEAR; i < year; i++)
    {
        if (i % 4 == 0)
          days += 366;
        else
          days += 365;
    }
    if (year % 4 == 0)
    {
        for (i = 1; i < month; i++)
             days += month_days_4[i - 1];
    }
    else
    {
        for (i = 1; i < month; i++)
             days += month_days[i - 1];
    }
    days += day;
    printf("%d\n", days);

    return 0;
}
