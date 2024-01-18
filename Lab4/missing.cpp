#include <iostream>
using namespace std;
int main()
{
    int j, k;
    cin >> j;
    int ara[j + 1] = {0};
    for (int i = 1; i < j; i++)
    {
        cin >> k;
        ara[k]++;
    }
    for (int i = 1; i <= j; i++)
    {
        if (ara[i] == 0)
        {
            cout << i << endl;
        }
    }
}