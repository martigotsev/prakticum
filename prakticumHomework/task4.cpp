#include <iostream>
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
int numberConstruction(int n)
{
    int number = n, count, numberConstruction = 0, max = 10, max2, countSameDigitOfNumber;
    count = countOfDigit(n);
    while (count != 0)
    {
        max2 = 0, countSameDigitOfNumber = 0;

        n = number;
        while (n != 0)
        {
            if (n % 10 > max2 && n % 10 < max)
            {
                max2 = n % 10;
            }
            n /= 10;
        }
        n = number;
        while (n != 0)
        {
            if (max2 == n % 10)
            {
                countSameDigitOfNumber++;
                numberConstruction *= 10;
                numberConstruction += max2;
            }
            n /= 10;
        }
        count -= countSameDigitOfNumber;
        max = max2;
    }
    return numberConstruction;
}
int enterPositiveNumber()
{
    int number = 0;
    do
    {
        cin >> number;
    } while (number <= 0);
    return number;
}

int main()
{
    unsigned long number;
    number = enterPositiveNumber();
    cout << numberConstruction(number);
}