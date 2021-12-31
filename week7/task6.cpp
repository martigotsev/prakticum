#include <iostream>
using namespace std;
void enterArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    cout << endl;
}
void multipliedArr(int arr[], int size, int multiplaydNumber)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= multiplaydNumber;
    }
    cout << endl;
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cout << arr[i] << endl;
    }
}

int main()
{
    int size;
    do
    {
        cout << "Enter number in interval [0-100]" << endl;
        cin >> size;
    } while (size < 0 || size > 100);
    int multiplaydNumber;
    int arr[size];
    enterArr(arr, size);
    cout << "Enter multiplied number" << endl;
    cin >> multiplaydNumber;
    multipliedArr(arr, size, multiplaydNumber);
    printArr(arr, size);
}