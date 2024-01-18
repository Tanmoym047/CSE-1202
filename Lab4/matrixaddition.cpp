#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Rows: ";
    cin >> n;
    cout << "Columns: ";
    cin >> m;
    int matrix1[n][m];
    int matrix2[n][m];
    int add[n][m] = {0};
    cout << "Enter Matrix 1: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter Matrix 2: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            add[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << add[i][j] << "\t";
        }
        cout << endl;
    }

}