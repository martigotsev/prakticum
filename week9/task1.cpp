#include <iostream>
using namespace std;
void printMatrix(int matrix[][5], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
void fillMatrix(int matrix[][5], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "martix[" << i << "][" << j << "]=";
            cin >> matrix[i][j];
        }
    }
    cout << endl;
}
void printArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << array[i] << "\t";
    }
    cout << endl;
}
void fillArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "array[" << i << "]=";
        cin >> array[i];
    }
    cout << endl;
}
int theLongestCommonBeginningOfTheArrayWithTheColumn(int *array, int n, int matrix[][5], int m)
{
    int column = 0;
    int max = 0;
    int counter = 0;
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0, z = 0; i < m && z < n; i++, z++)
        {

            if (matrix[i][j] == array[z])
                counter++;
            else
                continue;
            cout << counter;
        }
        cout << endl;
        if (counter > max)
        {
            max = counter;
            column = j;
        }
        counter = 0;
    }
    return column;
}
int main()
{
    int m;
    cout << "m";
    cin >> m;
    int matrix[m][5];
    fillMatrix(matrix, m);
    printMatrix(matrix, m);
    int n;
    cout << "n";
    cin >> n;
    int array[n];
    fillArray(array, n);
    printArray(array, n);
    cout << theLongestCommonBeginningOfTheArrayWithTheColumn(array, n, matrix, m);
}