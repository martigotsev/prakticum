#include <iostream>
using namespace std;
const int size = 100;
void fillMatrix(int matrix[][size], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "matrix[" << i << "][" << j << "]=";
            cin >> matrix[i][j];
        }
    }
}
void printMatrix(int matrix[][size], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
void findCoords(int matrix[][size], int number, int rows, int cols, int &numberOfRows, int &numberOfCols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == number)
            {
                numberOfRows = i;
                numberOfCols = j;
                return;
            }
        }
    }
}
int main()
{
    int martix[size][size];

    int rows, cols;
    cout << "rows=";
    cin >> rows;
    cout << "cols=";
    cin >> cols;
    fillMatrix(martix, rows, cols);
    printMatrix(martix, rows, cols);
    int number;
    cout << "number=";
    cin >> number;
    int numberOfRow;
    int numberOfCol;
    findCoords(martix, number, rows, cols, numberOfRow, numberOfCol);
    cout << "number of row is ";
    cout << numberOfRow << " ";
    cout << "number of col is ";
    cout << numberOfCol;
}