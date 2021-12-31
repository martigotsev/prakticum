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
int countHigthNeigbour(int arr[], int size)
{
    int counter = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])

            counter++;
    }
    return counter;
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
    cout << countHigthNeigbour(arr, size);
}