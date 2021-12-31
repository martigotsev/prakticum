#include <iostream>
using namespace std;
void enterElementInArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}
void printEvenElementInArr(int arr[], int size)
{
    cout << "Even element in arr is ";
    for (int i = 0; i < size; i += 2)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    do
    {
        cout << "Emter number in interval [0;100]" << endl;
        cin >> size;
    } while (size < 0 || size > 100);
    int arr[size];
    enterElementInArr(arr, size);
    cout << endl;
    printEvenElementInArr(arr, size);
}