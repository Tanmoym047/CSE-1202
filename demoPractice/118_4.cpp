// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
#define ll long long int
#define loop(a, b) for (ll i = a; i < b; i++)
#define loop2(a, b) for (ll j = a; j < b; j++)
#define print(a) cout << a << endl
using namespace std;

int main()
{
    ll mat[5][5];
    ll checkrow, checkcol;
    loop(0, 5)
    {
        loop2(0, 5)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                checkrow = i;
                checkcol = j;
            }
        }
    }
    cout << abs(checkrow - 2) + abs(checkcol - 2) << endl;
}