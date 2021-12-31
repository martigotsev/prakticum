#include <iostream>
using namespace std;
void swap(int firstNumber, int &secondNumber)
{

    secondNumber = firstNumber;
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