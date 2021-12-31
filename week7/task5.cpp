#include <iostream>
using namespace std;
int sizeArr(char arr[])
{
    int size = 0;
    while (arr[size] != '\0')
    {
        size++;
    }
    return size;
}
bool isPalindrom(char arr[])
{
    int size;
    size = sizeArr(arr);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == arr[size - 1])
        {

            size--;
        }
        else
            return 0;
    }

    return 1;
}
int main()
{
    int size = 5;
    char array[size];
    cin.getline(array, size);
    cout << isPalindrom(array);
}