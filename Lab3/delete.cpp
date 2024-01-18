#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[20];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    cout << "Position: " << endl;
    int pos; 
    cin >> pos;
    pos--;
    
    for(int i = pos; i < n ; i++){
        array[i] = array[i + 1];
    }
    n--;

    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }


}