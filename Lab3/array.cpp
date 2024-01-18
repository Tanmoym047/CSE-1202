#include <iostream>
using namespace std;

int main(){
    int max = INT_MIN;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
        max = (array[i] > max) ? array[i] : max;
    }

    cout << "MAX: " << max << endl;



}