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
void minAndMaxInArray(int *array, int size, int &min, int &max)
{
    max = array[0];
    min = array[0];
    for (int i = 0; i < size; i++)
    {
        if (min > *(array + i))
            min = *(array + i);
        if (max < array[i])
            max = array[i];
    }
}
int main()
{
    int size;
    cout << "size=";
    cin >> size;
    int array[size];
    fillArray(array, size);
    printArray(array, size);
    int max, min;
    minAndMaxInArray(array, size, min, max);
    cout <<"min="<< min;
    cout <<"\nmax="<< max;
}