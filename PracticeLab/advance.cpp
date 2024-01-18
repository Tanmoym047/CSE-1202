#include <bits/stdc++.h>

void coprime(int x)
{

    for (int i = 1; i < x; i++)
    {
            if (std::gcd(i, 10) == 1)
            {
                printf("%d\t", i);
            }
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    coprime(x);
}