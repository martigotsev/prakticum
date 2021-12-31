#include <iostream>
#include <cmath>
using namespace std;
int countOfDigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
bool isNarcissisticNumber(int number)
{
    int count;
    count = countOfDigit(number);
    int numberCopy = number, sumOfSquares = 0;
    while (numberCopy != 0)
    {
        int degreeOfLastNumber = 1;
        int lastNumber = numberCopy % 10;
        for (int i = 0; i < count; i++)
        {
            degreeOfLastNumber *= lastNumber;
        }
        sumOfSquares += degreeOfLastNumber;
        numberCopy /= 10;
    }

    bool isTrue = (sumOfSquares == number);
    return isTrue;
}

int main()
{
    int number;
    do
    {
        cout << "Enter number!" << endl;
        cin >> number;
    } while (number < 0);

    if (isNarcissisticNumber(number) == true)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}