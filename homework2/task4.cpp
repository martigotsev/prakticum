#include <iostream>
#include <cstring>

using namespace std;
const int size = 100;
int countOfSymbol(char *array, int &counter)
{
    int i = 0;
    while (array[i] != 0)
    {
        if (array[i] != ' ')
            counter++;
        i++;
    }
    return i;
}
void printArr(char *arr)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        cout << arr[i] << " ";
    }
}

void toLower(char *arr)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        int razmqna;
        if (arr[i] >= 'A' && arr[i] <= 'Z')
            arr[i] = arr[i] + 'a' - 'A';
    }
}
bool startsWith(const char *str, const char *substr)
{
    if (substr[0] == '\0')
        return true;

    if (strlen(str) != strlen(substr))
        return false;

    return str[0] == (substr[0]) && startsWith(str + 1, substr + 1);
}
void trim(char *string)
{
    int len = strlen(string);
    if (len > 0)
    {
        int first = 0;
        while (string[first] < 'a' || string[first] > 'z')
            first++;
        if (first > 0)
            strcpy(string, string + first);
    }
    len = strlen(string);
    int last = len - 1;
    while (string[last] > 'z')
        last--;
    string[last + 1] = '\0';
}
void swap(char *a, char *b)

{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void sort(char *word)
{

    for (unsigned int i = 0; i < strlen(word) - 1; i++)
    {
        for (unsigned int j = i + 1; j < strlen(word); j++)

        {
            if (word[i] > word[j])
            {
                swap(&word[i], &word[j]);
            }
        }
    }
}
int main()
{

    char arr[size];
    cin.getline(arr, size);
    char arr1[size];
    cin.getline(arr1, size);
    cout << endl;
    toLower(arr);
    sort(arr);
    printArr(arr);
    trim(arr);
    cout << endl;
    printArr(arr);
    cout << endl;
    toLower(arr1);
    sort(arr1);
    trim(arr1);
    printArr(arr1);
    cout << endl;
    cout << boolalpha << startsWith(arr, arr1);

    return 0;
}