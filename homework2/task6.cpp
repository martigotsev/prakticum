#include <iostream>
using namespace std;
void fillArr(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        cin >> arr[i];

}

void printArr(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        cout << arr[i] << "  ";
        cout<<endl;
}

void newArr(int *arr, int size, int k)
{
    while (k < 0)
        k = size + k;
    if (k > size)
        k = k % size;

    int number;
    for (int i = 0; i < k; i++)
    {
        number = arr[size - 1];
        int k = size - 1;
        for (int j = size - 2; j >= 0; j--)
        {
            arr[k] = arr[j];
            k--;
        }
        arr[k] = number;
    }
}
int main()
{
    int size;
    do
    {
        cout << "size=";
        cin >> size;
    } while (size <= 0);
    int arr[size] ;
    fillArr(arr, size);
    printArr(arr, size);
    int k;
    cout<<"k=";
    cin>>k; 
    newArr(arr, size, k);
    printArr(arr, size);
}