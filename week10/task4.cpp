#include <iostream>
using namespace std;
const int maxSize = 1000000;
int *firstSymbol(char *string, char symbol)
{
    for (int i = 0; string[i] != 0; i++)
    {
        if (*(string + i) == symbol)
            return (string + i);
    }

    return nullptr;
}

int main()
{
    char string[maxSize];
    cin.getline(string, maxSize);
    char symbol;
    cout << "enter symbol" << endl;
    cin >> symbol;
    cout << firstSymbol(string, symbol);
}