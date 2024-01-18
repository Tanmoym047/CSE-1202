#include <iostream>
using namespace std;

int main()
{
    int n, item;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    cout <<"Item to be searched: ";
    cin >> item;
    int loc = 0, check = 0;
    for (int i = 0; i < n; i++)
    {
        if (item == array[i])
        {
            loc = i;
            check = 1;
            break;
        }
    }
    if (check == 1)
        cout <<"Index of the item: "<< loc << endl;
    else
        cout << "Not found" << endl;
}