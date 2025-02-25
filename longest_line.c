#include <stdio.h>

#define MAXLINE 1000
int max;
char line[MAXLINE];
char longest[MAXLINE];

int getlongestline();
void copy();

int main()
{
    int len;
    int max;

    max = 0;
    while ((len = getlongestline()) > 0)
    {
        if (len > max)
        {
            max = len;
            copy();
        }
    }

    if (max > 0)
        printf("%s", longest);

    return 0;
}

int getlongestline()
{
    int c, i;

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

void copy()
{
    int i = 0;

    while ((longest[i] = line[i]) != '\0')
        ++i;
}