#include <iostream>
using namespace std;

int is_prime(int x){
    int check = 0;
    if(x <= 1){
        return 0;
    }
    for(int i = 2; i <= x / 2; i++){
        if(x % i == 0){
            check = 1;
            return 0;
        }
    }
    if(check == 0){
        return 1;
    }
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(is_prime(array[i])){
            cout << array[i] << " ";
        }
    }
    cout << endl;
}