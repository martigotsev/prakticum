#include <iostream>
using namespace std;
void swap(int &firstNumber, int &secondNumber)
{
    int swap = firstNumber;
    firstNumber = secondNumber;
    secondNumber = swap;
    cout << endl;
}
int main()
{
    int firstNumber, secondNumber;
    cout << "firstnumber=";
    cin >> firstNumber;
    cout << "secondNumber=";
    cin >> secondNumber;
    swap(firstNumber, secondNumber);
    cout << firstNumber << endl;
    cout << secondNumber;
}