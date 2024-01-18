#include <iostream>
using namespace std;

int main()
{
    int n, m, x, y;
    cout << "Matrix1 Rows: ";
    cin >> n;
    cout << "Matrix1 Columns: ";
    cin >> m;
    int matrix1[n][m];
    cout << "Matrix2 Rows: ";
    cin >> x;
    cout << "Matrix2 Columns: ";
    cin >> y;
    int matrix2[x][y];
    cout << "Enter Matrix 1: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter Matrix 2: ";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    int multi[n][y] = {0};
    if (m != x)
    {
        cout << "BYE" << endl;
    }
    else
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < y; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                multi[i][j] = sum;
                sum = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << multi[i][j] << "\t";
        }
        cout << endl;
    }
}