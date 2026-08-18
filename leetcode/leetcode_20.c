#include <stdio.h>
#include <stdbool.h>

typedef struct cha {
    int top;
    char stack[100];
} ch;

void init(ch *s)
{
    s->top = -1;
}

bool verify(ch *s, char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if (c == '(' || c == '{' || c == '[')
        {
            s->stack[++s->top] = c;
        }
        else
        {
            if (s->top == -1)
                return false;

            char open = s->stack[s->top--];

            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '['))
            {
                return false;
            }
        }
    }

  
    return s->top == -1;
}

int main()
{
    ch s;

    init(&s);

    char str[] = "({[]})";

    if (verify(&s, str))
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}