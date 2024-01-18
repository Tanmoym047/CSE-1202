#include <iostream>
using namespace std;

int main(){
    int n, x, count = 0;
    cout << "No. of Elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Element to search: ";
    cin >> x;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            cout << x <<" is present at location " << i+1 << endl;
            count++;
        }
    }
    cout << x << " is present " << count << " time in the array" << endl;
}