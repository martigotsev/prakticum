#include <iostream>
#include <string.h>
using namespace std;
bool isfirstNumberAreDigreeofSecond(int firstNumber, int secondNumber)
{
    int counter = 1;
    if (firstNumber == 1)
        return 1;
    int secondNumberCopy = secondNumber;
    while (firstNumber >= secondNumber)
    {
        if (firstNumber == secondNumber)
            return 1;
        secondNumber *= secondNumberCopy;
    }
    return 0;
}
int digree(int firstNumber, int secondNumber)
{
    int counter = 0;
    if (firstNumber == 1)
        return counter;
    counter++;
    int secondNumberCopy = secondNumber;
    while (firstNumber >= secondNumber)
    {
        if (firstNumber == secondNumber)
            return counter;
        secondNumber *= secondNumberCopy;
        counter++;
    }
}
int main()
{
    int firstNumber, secondNumber;
    cout << "Enter number:" << endl;
    cout << "firstNumber = ";
    cin >> firstNumber;
    cout << "secondNumber = ";
    cin >> secondNumber;
    cout << boolalpha << isfirstNumberAreDigreeofSecond(firstNumber, secondNumber) << endl;
    if (isfirstNumberAreDigreeofSecond(firstNumber, secondNumber))
    {
        cout << digree(firstNumber, secondNumber);
    }
}
