// https://cses.fi/problemset/result/6956167/

#include <bits/stdc++.h>
#define ll long long int
#define loop(a, b) for (ll i = a; i < b; i++)
#define loop2(a, b) for (ll j = a; j < b; j++)
#define print(a) cout << a << endl
using namespace std;

int alpha[26];

int main()
{
    string s;
    cin >> s;
    int size = 0;
    int i = 0;
    while (true)
    {
        if (s[i] == '\0')
        {
            break;
        }
        size++;
        i++;
    }
    for (int i = 0; i < size; i++)
    {
        alpha[s[i] - 'A']++;
    }
    int odd = 0, oddindex = -10;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] % 2 == 1)
        {
            odd++;
            oddindex = i;
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] % 2 == 0)
        {
            int half = alpha[i] / 2;
            alpha[i] -= half;
            while (half--)
            {
                cout << (char)(i + 'A');
            }
        }
    }
    if (odd == 1)
    {
        while (alpha[oddindex]--)
        {
            cout << (char)(oddindex + 'A');
        }
    }
    for (int i = 25; i >= 0; i--)
    {
        while (alpha[i] > 0)
        {
            cout << (char)(i + 'A');
            alpha[i]--;
        }
    }
    cout << endl;
}