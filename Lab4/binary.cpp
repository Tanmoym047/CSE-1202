#include <iostream>
using namespace std;

int main()
{
    int n, item;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << "Item to be searched: ";
    cin >> item;
    int UB = n - 1, LB = 0, MID = 0, check = 0;
    while (LB <= UB)
    {
        MID = (UB + LB) / 2;
        if (item == array[MID])
        {
            check = 1;
            cout << "LOC: " << MID + 1 << endl;
            break;
        }
        else if (item > array[MID])
        {
            LB = MID + 1;
        }
        else
        {

            UB = MID - 1;
        }
    }
    if(check == 0){
        cout << "LOC: " << 0 << endl;
    }
}