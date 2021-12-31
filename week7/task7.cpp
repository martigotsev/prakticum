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
void revurst(int arr[], int size)
{
    int j = 0, i = size - 1, q, p;
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cout << arr[i] << endl;
    }
}
void reverseArr(int arr[], int arr2[], int size)
{
    int j = 0;
    for (int i = size - 1; i >= 0; i--)
    {

        arr2[j] = arr[i];
        j++;
    }
    j = 0;
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr2[j];
        j++;
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
    int arr2[size];
    enterArr(arr, size);
    reverseArr(arr, arr2, size);
    printArr(arr, size);
}