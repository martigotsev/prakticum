#include<iostream>
using namespace std;
const int size=10000;
void printStr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
    cout << endl;
}

void changeSymbol(char &c)
{
    if (c >= '0' && c <= '9')
        c = '#';
    else if (c >= 'a' && c <= 'z')
        c -= 'a' - 'A';
    else
        c += 'a' - 'A';
}
void newStr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        changeSymbol(str[i]);
    }
}
int main()
{
    char str[size];
    cin.getline(str, size);
    newStr(str);
    printStr(str);
}