#include <stdio.h>

int prime(int x)
{
    int check = 0, count = 0;
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    check = 1;
                    break;
                }
                else
                {
                    continue;
                }
            }
            if (check == 0)
            {
                count++;
            }
        }
        else
        {
            continue;
        }
    }
    return count;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int count, count1;
    count = prime(x);
    count1 = prime(y);
    if (count == count1)
    {
        printf("Equal");
    }
    else
        printf("Not Equal");
}