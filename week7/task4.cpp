#include <iostream>
using namespace std;
int counter(char arr[])
{
    int counter = 0;
    while (arr[counter] != '\0')
    {
        counter++;
    }
    return counter;
}

int main()
{
    int size = 100;
    char array[size];
    cin.getline(array, size);
    cout << counter(array);
}