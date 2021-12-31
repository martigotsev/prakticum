#include <iostream>
using namespace std;
const int maxSize = 10000;
void fillMatrix(int matrix[][maxSize], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "matrix[" << i << "][" << j << "]=";
            cin >> matrix[i][j];
        }
    }
}
void printMatrix(int matrix[][maxSize], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
int sumOfFirstAndSecodDiagonal(int matrix[][maxSize], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += matrix[i][i];
    }

    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        if (i != j)
            sum += matrix[i][j];
    }

    return sum;
}
int main()
{
    int size;
    cout << "size=";
    cin >> size;

    int martix[size][maxSize];
    fillMatrix(martix, size);
    printMatrix(martix, size);
    cout << endl
         << sumOfFirstAndSecodDiagonal(martix, size);
}