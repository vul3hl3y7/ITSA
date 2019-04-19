#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 1024

int stack[m];
int top = 0;

void push(int a)
{
    if (top >= m)
        exit(-1);  //error
    stack[top++] = a;
}

int pop()
{
    if (top == 0)
        exit(-1);  //error
    return stack[--top];
}


int main()
{
    char str[m];
    int  i, len, op1, op2;

    scanf("%s", str);
    while (str[0] != '0')
    {
        len = strlen(str);
        for (i = 0; i < len; i++)
        {
            if ('0' <= str[i] && str[i] <= '9')
                push(str[i]-'0');
            else
            {
                op2 = pop();
                op1 = pop();

                if (str[i] == '+')
                    push(op1 + op2);
                else if(str[i] == '-')
                    push(op1 - op2);
                else if(str[i] == '*')
                    push(op1 * op2);
                else if(str[i] == '/')
                    push(op1 / op2);
                else if(str[i] == '%')
                    push(op1%op2);
            }
        }
        printf("%d\n", pop());

        scanf("%s", str);
    }
    return 0;
}
