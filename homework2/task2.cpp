#include <iostream>
using namespace std;
const int maxsize = 100;
int facturiel(int k)
{
    if (k == 0)
    {
        return 1;
    }

    return k * facturiel(k - 1);
}
void fillMatrix(int matrix[][maxsize], int size, int k)
{
    int number = size - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == number)
                matrix[i][j] = k;
            else if (j == number + 1)
                matrix[i][j] = facturiel(k);
            else
                matrix[i][j] = 0;
        }
        k++;
        number--;
    }
}
void printMatrix(int matrix[][maxsize], int size)
{
    int number = size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }
}
int main()
{
    int size;
    cin >> size;
    int matrix[size][maxsize];
    int k;
    cin >> k;
    fillMatrix(matrix, size, k);
    printMatrix(matrix, size);
}