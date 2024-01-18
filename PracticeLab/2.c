#include <stdio.h>

int main()
{
    int x = 0;
    char c;
    char a[10];
    char b[10];
    gets(a);
    scanf(" %s", b);
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == '\0' || b[i] == '\0')
        {
            break;
        }
        else if (a[i] != b[i])
        {
            printf("Not Equal");
            x = 1;
            break;
        }
    }
    if (x == 0)
    {
        printf("Equal");
    }
}