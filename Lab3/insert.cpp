#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[20];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << "Value to be inserted: " << endl;
    int value; 
    cin >> value;
    cout << "Position: " << endl;
    int pos; 
    cin >> pos;
    pos--;
    n++;
    for(int i = n - 1; i >= pos + 1 ; i--){
        array[i] = array[i - 1];
    }
    array[pos] = value;

    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }


}