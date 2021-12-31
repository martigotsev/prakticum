#include <iostream>
using namespace std;
double max(int firstNumber, int secondNumber)
{
    if (firstNumber > secondNumber)
        return firstNumber;
    return secondNumber;
}
int main()
{
    double firstNumber, secondNumber;
    cout << "Enter number:" << endl;
    cin >> firstNumber;
    cout << "Enter number:" << endl;
    cin >> secondNumber;
    cout << max(firstNumber, secondNumber);
}