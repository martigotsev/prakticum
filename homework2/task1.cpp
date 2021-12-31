#include <iostream>
using namespace std;
const int size = 100;
void printArr(char *arr)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        cout << arr[i] << " ";
    }
}
void arrWithoutNumber(char *arr)
{
    int counter = 0;
    while (arr[0] != 0)
    {
        if (arr[0] >= '0' && arr[0] <= '9')
        {
            for (int i = 0; arr[i] != 0; i++)
            {
                arr[i] = arr[i + 1];
            }
        }
        else
        {
            counter++;
        }
        return arrWithoutNumber(arr + counter);
    }
}
int main()
{
    char arr[size];
    cin.getline(arr, size);
    printArr(arr);
    cout << endl;
    arrWithoutNumber(arr);
    printArr(arr);
}