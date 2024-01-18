#include <bits/stdc++.h>
using namespace std;
void solve(int test)
{
    int n, k, sum = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int ans = 0;
    for(int i=0; i<n; i++)
    {
        if (k > sum - 2 * arr[i])
            ans++;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        solve(t--);
    }
    return 0;
}