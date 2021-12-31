#include <iostream>
#include <string.h>
using namespace std;
const int size = 1000000;
void strcpy(char *string, char *newString)
{
    if (string[0] != 0)
    {
        newString[0] = string[0];
        return strcpy(string + 1, newString + 1);
    }
    return;
}
char printString(char *string)
{
    if (string[0] != 0)
    {
        cout << string[0];
        return printString(string + 1);
    }
}
int strlen(char *string)
{
    int i = 0;
    while (string[i] != 0)
    {
        i++;
    }
    return i + 1;
}
void strcat(char *firstString, char *secondString)
{
    int number = strlen(firstString) - 1;
    for (int i = 0; secondString[i] != 0; i++)
    {
        firstString[number + i] = secondString[i];
    }
}
int strcmp(char *firstString, char *secondString)
{
    if (firstString[0] == 0 && secondString[0] == 0)
        return 0;
    if (firstString[0] != 0 || secondString[0] != 0)
    {
        cout << "*";

        if (firstString[0] > secondString[0] || secondString[0] == 0)
            return 1;
        if (firstString[0] < secondString[0] || firstString[0] == 0)
            return -1;

        strcmp(firstString + 1, secondString + 1);
    }
}
int counter = 2;
void reverse(char *string)
{
    int number = strlen(string) - counter;

    if (number > 0)
    {

        int first = string[0];
        string[0] = string[number];
        string[number] = first;
        counter++;

        reverse(string + 1);
    }
}
void replace(char *string, char symbol, char newSymbol)
{
    for (int i = 0; string[i] != 0; i++)
    {
        if (string[i] == symbol)
            string[i] = newSymbol;
    }
}
int find(char *string, char symbol)
{
    for (int i = 0; string[i] != 0; i++)
    {
        if (string[i] == symbol)
            return i;
    }
    return -1;
}
int count(char *string, char symbol)
{
    int counter = 0;
    for (int i = 0; string[i] != 0; i++)
    {
        if (string[i] == symbol)
            counter++;
    }
    return counter;
}
void substr(char *string, char *newString, int firstIndex, int secondIndex)
{
    for (int i = firstIndex, j = 0; i <= secondIndex; i++, j++)
        newString[j] = string[i];
}
bool strstr(char *string, char *newString)
{
    if (strlen(string) < strlen(newString))
        return false;
    for (int i = 0; i < strlen(newString) - 1; i++)
    {
        if (string[i] != newString[i])
            return strstr(string + 1, newString);
    }
    return true;
}
int main()
{
    // strcpy - копира един низ в нов

    // char string[size];
    // cin.getline(string,size);
    // char newString[size];
    // strcpy(string , newString);
    // printString(newString);

    // strcat - конкатенира два низа

    // char firstString[size];
    // cin.getline(firstString, size);
    // char secondString[size];
    // cin.getline(secondString, size);
    // strcat(firstString, secondString);
    // printString(firstString);

    // strlen - намира дължина на низ

    // char string[size];
    // cin.getline(string,size);
    // cout<<strlen(string);

    // strcmp - стравнява два низа (= - 0, > - 1, < - -1)

    // char firstString[size];
    // cin.getline(firstString, size);
    // printString(firstString);
    // char secondString[size];
    // cin.getline(secondString, size);
    // cout << strcmp(firstString, secondString);

    // reverse - обръща низ

    // char string[size];
    // cin.getline(string, size);
    // reverse(string);
    // printString(string);

    // replace - заменя всяко срещане на даден символ с друг

    // char string[size];
    // cin.getline(string, size);
    // char symbol;
    // cout << "symbol=";
    // cin >> symbol;
    // char newSymbol;
    // cout << "new symbol=";
    // cin >> newSymbol;
    // replace(string, symbol, newSymbol);
    // printString(string);

    // find - намира и връща индекса на първото срещане на даден символ или връща -1

    // char string[size];
    // cin.getline(string, size);
    // char symbol;
    // cout << "symbol=";
    // cin >> symbol;
    // cout<<find(string, symbol);

    // count - връща броя на срещанията на даден символ

    // char string[size];
    // cin.getline(string, size);
    // char symbol;
    // cout << "symbol=";
    // cin >> symbol;
    // cout<<count(string, symbol);

    // substr - създава подниз от даден индекс до даден индекс

    // char string[size];
    // cin.getline(string, size);
    // int firstIndex;
    // int secondIndex;
    // int length = strlen(string);
    // do
    // {
    //     cout << "first index - ";
    //     cin >> firstIndex;
    // } while (firstIndex > length || firstIndex < 0);
    // do
    // {
    //     cout << "second index - ";
    //     cin >> secondIndex;
    // } while (secondIndex > length || firstIndex > secondIndex);
    // char newString[size];
    // substr(string,newString,firstIndex,secondIndex);
    // printString(newString);

    // strstr - проверява дали даден низ е подниз на друг низ

    // char string[size];
    // cin.getline(string, size);
    // char newString[size];
    // cin.getline(newString, size);
    // cout << boolalpha << strstr(string, newString);
}
