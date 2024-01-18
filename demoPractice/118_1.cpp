/*Suppose there are several student's CT numbers are given.
 You have to sort and  find specific number and location of that sorted array using searching (Binary search)*/

#include <bits/stdc++.h>
#define ll long long int
#define loop(a, b) for (ll i = a; i < b; i++)
#define loop2(a, b) for (ll j = a; j < b; j++)
#define print(a) cout << a << endl
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    loop(0, n)
    {
        cin >> arr[i];
    }
    ll num;
    cin >> num;
    loop(0, n - 1)
    {
        loop2(i + 1, n)
        {
            if (arr[i] > arr[j])
            {
                ll temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    ll UB = n - 1, LB = 0, MID = 0, check = 0; 
    while(LB <= UB){
        MID = (UB + LB) / 2;
        if(arr[MID] == num){
            check = 1;
            cout << "Number Found!" << endl;
            cout << "LOC: " << MID + 1 << endl;
            break;
        }
        else if(arr[MID] < num){
            LB = MID + 1;
        }
        else if(arr[MID] > num){
            UB = MID - 1;
        }
    }
    if(check == 0){
        print("Not FOund");
    }
}