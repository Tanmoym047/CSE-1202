//https://codeforces.com/problemset/problem/1851/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, check = 0;
        cin >> n;
        ll array[n];
        ll array1[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> array[i];
            array1[i] = array[i];
        }
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(array[i] >= array[j]){
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if(array[i] % 2 != array1[i] %2){
                check = 1;
            }
        }
        if(check){
            cout << "NO" <<endl;
        }
        else
            cout << "YES" <<endl;
    }
}