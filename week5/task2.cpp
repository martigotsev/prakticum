#include <iostream>
#include <math.h>
using namespace std;
bool isPraimNUmber(int number)
{
    for (int i = 2; i <= number; i++)
    {

        if (number == i)
            return 1;
        if (number % i == 0)
            return 0;
    }
}
int countOfDigit(int number)
{
    int counter = 0;
    while (number != 0)
    {
        counter++;
        number /= 10;
    }
    return counter;
}
bool isPalindrom(int number)
{
}
void printPrimeAndPalindrom(int n)
{
    int number = 2;
    while (n != 0)
    {
        if (isPraimNUmber(number) && isPalindrom(number))
        {
            cout << number << ",";
            n--;
        }
        number++;
    }
}
int main()
{
    int n;
    do
    {
        cout << "enter int number in interval (0-~)";
        cin >> n;
    } while (n <= 0);
    // printPrimeAndPalindrom(n);
    cout << isPalindrom(3023);
}