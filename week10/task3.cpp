#include <iostream>
using namespace std;
void fillArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << endl;
}
void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void multiplyArrayWithNumber(int *array, int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = array[i] * number;
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "size=";
    cin >> size;
    int array[size];

    fillArray(array, size);
    printArray(array, size);
    int number;
    cout << "Number";
    cin >> number;
    multiplyArrayWithNumber(array, size, number);
    printArray(array, size);
}