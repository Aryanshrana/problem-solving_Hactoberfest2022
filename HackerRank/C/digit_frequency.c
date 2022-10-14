#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count(char *st, char c)
{
    int count = 0;
    // char cc = (char)c;
    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i] == c)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    return count;
};
int main()
{

    char st[1000];
    char dig[] = "0123456789";

    scanf("%s", st);
    for (int i = 0; i < 10; i++)
    {
        // sprintf(a, "%c", i);
        printf("%d ", count(st, dig[i]));
    }
    return 0;
}
